#include "libp.h"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			size_of_output;
	int 		i;

	i = print_part_of_format_str(0, format);
	size_of_output = i;
	va_start(ap, format);
	while (i < ft_strlen(format))
	{

	}
	return (size_of_output);
}