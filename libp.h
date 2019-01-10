#ifndef LIBP_H
# define LIBP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <inttypes.h>
# include <locale.h>

#include <stdio.h>

typedef enum {none, hh, h, ll, l, L} e_len;

typedef struct      s_format
{
    char            type;

    int 			sign_plus;
	int 			sign_minus;
	int 			sign_null;
	int 			sign_hash;
	int 			sign_space;

    int             width;
    int             precision;
    e_len			len;
}                   t_format;


/* структура для хранения юникода при выводе через строку*/
typedef struct  s_unicode
{
	char		byte[4];
}				t_unicode;


int					is_type(char c);
void				print_format(t_format format);

int					what_to_manage(t_format fmt, va_list *ap);
int					manage_char(t_format fmt, va_list *ap);
int					manage_string(t_format fmt, va_list *ap);
int					manage_pointer(t_format fmt, va_list *ap);
int					manage_decimal(t_format fmt, va_list *ap);
int					manage_unsigned(t_format fmt, va_list *ap);
int					manage_octal(t_format fmt, va_list *ap);
int					manage_binary(t_format fmt, va_list *ap);
int					manage_hex(t_format fmt, va_list *ap);
int					manage_float(t_format fmt, va_list *ap);

int					set_format(const char *format, int i,
								t_format *fmt, va_list *ap);

int					ft_printf(const char *format, ...);
int					ft_putchar(unsigned n);
int					ft_putstr(char *str);
int					ft_strlen(const char *str);
int					ft_atoi(const char *str);
char				*ft_itoa_base_signed(long long value, int base);
char				*ft_itoa_base_unsigned(unsigned long long value,
												int base);
void				ftoa(float n, char *res, int afterpoint);

#endif
