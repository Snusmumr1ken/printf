#include "libp.h"

int			end_of_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
		c == 'o' || c == 'u' || c == 'x' || c == 'X' || c == 'f' ||
		c == '%')
		return (1);
	return (0);
}

/*фукнция которая выводит всё от указанной точки до символа '%' */
int			print_part_of_format_str(int a, const char *string)
{
	while (string[a] != '%')
	{
		write(1, &string[a], 1);
		a++;
	}
	return (a);
}

int			ft_strlen(const char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}