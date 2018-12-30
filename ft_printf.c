#include "libp.h"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			size_of_output;
	int 		i;
	int 		len_of_format;

	i = 0;
	size_of_output = 0;
	len_of_format = ft_strlen(format);
	va_start(ap, format);
	while (i < len_of_format)
	{
		if (format[i] == '%')
		{
			i = set_format(format, i + 1, ap);
			continue;
		}
		write(1, &format[i], 1);
		i++;
		size_of_output++;
	}
	return (size_of_output);
}