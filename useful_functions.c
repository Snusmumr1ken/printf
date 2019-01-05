#include "libp.h"

int			is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
		c == 'o' || c == 'u' || c == 'x' || c == 'X' || c == 'f' ||
		c == '%')
		return (1);
	return (0);
}

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

	if (fmt.type == 'c')
		output_size = manage_char(fmt, ap);
	if (fmt.type == 's')
		output_size = manage_string(fmt, ap);
	if (fmt.type == '%')
		output_size = write(1, "%", 1);
	if (fmt.type == 'p')
		output_size = manage_pointer(fmt, ap);
	if (fmt.type == 'd' || fmt.type == 'i')
		output_size = manage_decimal(fmt, ap);
	return (output_size);
}