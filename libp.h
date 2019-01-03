#ifndef LIBP_H
# define LIBP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <inttypes.h>
# include <locale.h>

#include <stdio.h>

typedef struct      s_format
{
    char            *str;
    int				num;

    char            type;

    int 			sign_plus;
	int 			sign_minus;
	int 			sign_null;
	int 			sign_hash;
	int 			sign_space;

    int             width;
    int             precision;

    int				output_size;
}                   t_format;


/* структура для хранения юникода при выводе через строку*/
typedef struct  s_unicode
{
	char		byte[4];
}				t_unicode;

void				print_format(t_format format);

int					what_to_manage(t_format fmt, va_list *ap);
int					manage_char(t_format fmt, va_list *ap);


int					set_format(const char *format, int i, t_format *fmt);

int					ft_printf(const char *format, ...);
int					ft_putchar(unsigned n);
int					ft_putstr(char *str);
int					ft_strlen(const char *str);
int					ft_atoi(const char *str);
char				*ft_itoa_base_signed(intmax_t value, int base);
char				*ft_itoa_base_unsigned(uintmax_t value, int base);

#endif
