#include "libp.h"

int			manage_char(t_format fmt, va_list *ap)
{
	int		size_of_output;
	char	c;

	c = (char)va_arg(*ap, int);
	size_of_output = 1;
	if (fmt.sign_minus == 1)
		write(1, &c, 1);
	if (fmt.width != -999)
	{
		while (size_of_output < fmt.width)
		{
			(fmt.sign_null == 1) ? (write(1, "0", 1)) :
									(write(1, " ", 1));
			size_of_output++;
		}
	}
	if (fmt.sign_minus == 0)
		write(1, &c, 1);
	return (size_of_output);
}