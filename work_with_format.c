#include "libp.h"

static int			is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
		c == 'o' || c == 'u' || c == 'x' || c == 'X' || c == 'f' ||
		c == '%')
		return (1);
	return (0);
}

static t_format		set_default(void)
{
	t_format fmt;

	fmt.sign_minus = 0;
	fmt.sign_plus = 0;
	fmt.sign_null = 0;
	fmt.sign_or = 0;
	fmt.sign_space = 0;
	fmt.width = -999;
	fmt.precision = -1;
	return (fmt);
}

static int			set_width_or_prec(const char *str, int pos, t_format *fmt,
																int w_or_p)
{
	int		num;

	num = 0;
	while (str[pos] >= 48 && str[pos] <= 57)
	{
		num = num * 10 + (str[pos] - 48);
		pos++;
	}

	/* i've added "w_or_p" varaible to decide what we set.*/
	/*If w_or_p == 1 it is width, else we set prec*/

	(w_or_p == 1) ? (fmt->width = num) : (fmt->precision = num);
	return (pos);
}

static int			check_and_set_sign(char c, t_format *fmt)
{
	if (c == '0')
	{
		fmt->sign_null = 1;
		return (1);
	}
	if (c == '-')
	{
		fmt->sign_minus = 1;
		return (1);
	}
	if (c == '+')
	{
		fmt->sign_plus = 1;
		return (1);
	}
	if (c == '#')
	{
		fmt->sign_or = 1;
		return (1);
	}
	if (c == ' ')
	{
		fmt->sign_space = 1;
		return (1);
	}
	return (0);
}

int					set_format(const char *format, int i, va_list formats)
{
	t_format	fmt;

	fmt = set_default();
	while (is_type(format[i]) == 0)
	{
		if (check_and_set_sign(format[i], &fmt))
			i++;
		if (format[i] == '.')
			i = set_width_or_prec(format, i, &fmt, 2); /*last parametr shows that we want to set prec*/
	}
	fmt = fmt;
	formats = formats + 1 - 1;
	fmt.type = format[i];
	return (i);
}