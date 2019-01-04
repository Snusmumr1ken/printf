#include "libp.h"

int			ft_strlen(const char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int			what_to_manage(t_format fmt, va_list *ap)
{
	int output_size;

	output_size = 0;
	if (fmt.type == 'c')
		output_size = manage_char(fmt, ap);
	if (fmt.type == 's')
		output_size = manage_string(fmt, ap);
	if (fmt.type == '%')
	{
		write(1, "%", 1);
		output_size++;
	}
	return (output_size);
}