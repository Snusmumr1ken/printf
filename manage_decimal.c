#include "libp.h"

int			manage_decimal(t_format fmt, va_list *ap)
{
	int 			output_size;
	long long		num;

	num = va_arg(*ap, long long);
	fmt.width++;
	output_size = 0;
	num = num + 1 - 1;
	return (output_size);
}