/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyvchyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:58:36 by anyvchyk          #+#    #+#             */
/*   Updated: 2019/01/15 16:58:40 by anyvchyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libp.h"

static char 	*pointer_to_str(void *p)
{
	unsigned int	dig;
	char			*buf;

	buf = (char*)malloc(15);
	buf[14] = '\0';
	buf[0] = '0';
	buf[1] = 'x';
	for (int *j = p , k = 13 ; j ; j = (void*)(((size_t)j) >> 4) , --k)
	{
		dig = ((size_t) j) % 0x10;
		if (dig < 10)
			buf[k] = '0' + dig;
		else
			buf[k] = 'a' + (dig - 10);
	}
	return (buf);
}

static int			write_value(t_format fmt, char *string, void *p)
{
	int output_size;

	output_size = 0;
	if (fmt.sign_plus == 1)
		output_size += write(1, "+", 1);
	if (fmt.sign_space == 1 && fmt.sign_plus != 1)
		output_size += write(1, " ", 1);
	if (p == 0)
	{
		output_size += write(1, &string[0], 1);
		output_size += write(1, &string[1], 1);
		while ((fmt.precision != 0 && fmt.precision >= 1) || fmt.precision == -1)
		{
			output_size += write(1, "0", 1);
			fmt.precision--;
		}
	}
	else
		output_size += write(1, string, 14);
	return (output_size);
}

static int			write_padding(t_format fmt, char *string)
{
	int output_size;
	int str_len;

	str_len = (fmt.sign_plus == 1 || fmt.sign_space == 1) ?
			  (ft_strlen(string) + 1) : (ft_strlen(string));
	output_size = 0;
	while (output_size < fmt.width - str_len)
	{
		(fmt.sign_null == 1) ? (write(1, "0", 1)) :
		(write(1, " ", 1));
		output_size++;
	}
	return (output_size);
}

int				manage_pointer(t_format fmt, va_list *ap)
{
	char	*buf;
	void	*p;
	int 	output_size;

	output_size = 0;
	p = va_arg(*ap, void*);
	buf = pointer_to_str(p);
	if (fmt.sign_minus == 1)
	{
		output_size += write_value(fmt, buf, p);
		output_size += write_padding(fmt, buf);
	}
	if (fmt.sign_minus == 0)
	{
		output_size += write_padding(fmt, buf);
		output_size += write_value(fmt, buf, p);
	}
	free(buf);
	return (output_size);
}
