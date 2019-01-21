/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyvchyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:59:17 by anyvchyk          #+#    #+#             */
/*   Updated: 2019/01/15 16:59:18 by anyvchyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libp.h"

static t_format		set_default(void)
{
	t_format fmt;

	fmt.sign_minus = 0;
	fmt.sign_plus = 0;
	fmt.sign_null = 0;
	fmt.sign_hash = 0;
	fmt.sign_space = 0;
	fmt.width = -999;
	fmt.precision = -1;
	fmt.len = 0;
	fmt.type = ';';
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
	(w_or_p == 1) ? (fmt->width = num) :
	(fmt->precision = num);
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
		fmt->sign_hash = 1;
		return (1);
	}
	if (c == ' ')
	{
		fmt->sign_space = 1;
		return (1);
	}
	return (0);
}

static int			check_and_set_len(const char *str,
									int i, t_format *fmt)
{
	if (str[i] == 'h' && str[i + 1] == 'h')
	{
		fmt->len = hh;
		return (2);
	}
	if (str[i] == 'l' && str[i + 1] == 'l')
	{
		fmt->len = ll;
		return (2);
	}
	if (str[i] == 'h')
	{
		fmt->len = h;
		return (1);
	}
	if (str[i] == 'j')
	{
		fmt->len = j;
	}
	if (str[i] == 'l')
	{
		fmt->len = l;
		return (1);
	}
	if (str[i] == 'L')
	{
		fmt->len = L;
		return (1);
	}
	if (str[i] == 'z')
	{
		fmt->len = z;
		return (1);
	}
	return (0);
}

int					set_format(const char *format, int i,
		t_format *fmt, va_list *ap)
{
	int prev;

	*fmt = set_default();
	prev = i;
	while (is_type(format[i]) == 0)
	{
		if (format[i] == '*')
		{
			fmt->width = va_arg(*ap, int);
			i++;
		}
		i += check_and_set_sign(format[i], fmt);
		i += check_and_set_len(format, i, fmt);
		if (format[i] == '.' && format[i + 1] == '*')
		{
			fmt->precision = va_arg(*ap, int);
			i += 2;
		}
		if (format[i] == '.')
			i = set_width_or_prec(format, i + 1, fmt, 2);
		if (format[i] >= 49 && format[i] <= 57)
			i = set_width_or_prec(format, i, fmt, 1);
		if (format[i] == '\0')
			break ;
		if (prev == i)
			i++;
		prev = i;
	}
	if (format[i] != '\0')
		fmt->type = format[i];
	return (++i);
}
