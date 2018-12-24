#include "libp.h"

static int		count_active_bits(int n)
{
	int size;

	size = 0;
	while (n != 0)
	{
		size++;
		n = n >> 1;
	}
	return (size);
}

static int		print_unicode(t_unicode symb)
{
	int i;

	i = 0;
	while (symb.byte[i] != 0)
		write(1, &symb.byte[i++], 1);
	return (i);
}

static void		set_null(t_unicode *symb)
{
	int i;

	i = 0;
	while (i < 4)
		symb->byte[i++] = 0;
}

int		ft_putchar(unsigned n)
{
	t_unicode	symb;
	int			size;

	set_null(&symb);
	size = count_active_bits(n);
	if (size <= 7)
		symb.byte[0] = n;
	else if (size <= 11)
	{
		symb.byte[0] = 192 | (n >> 6);
		symb.byte[1] = 128 | (63 & n);
	}
	else if (size <= 16)
	{
		symb.byte[0] = 224 | (n >> 12);
		symb.byte[1] = 128 | (63 & (n >> 6));
		symb.byte[2] = 128 | (63 & n);
	}
	else
	{
		symb.byte[0] = 240 | (n >> 18);
		symb.byte[1] = 128 | (63 & (n >> 12));;
		symb.byte[2] = 128 | (63 & (n >> 6));
		symb.byte[3] = 128 | (63 & n);
	}
	return (print_unicode(symb));
}

int		ft_putstr(char *str)
{
	int 		i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	return (i);
}