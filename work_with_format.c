#include "libp.h"

static int			end_of_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
		c == 'o' || c == 'u' || c == 'x' || c == 'X' || c == 'f' ||
		c == '%')
		return (1);
	return (0);
}

int					set_format(const char *format, int start, va_list formats)
{
	while (end_of_format(format[start]) == 0)
	{
		formats = formats + 1 - 1;
		start++;
	}
	return (start);
}