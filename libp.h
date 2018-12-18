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
	int 			sign_or;
	int 			sign_space;

    int             width;
    int             precision;

    int				output_size;
}                   t_format;



/* структура для хранения юникода при выводе через строку*/
typedef struct		s_uni
{
	unsigned int	b1;
	unsigned int	b2;
	unsigned int	b3;
	unsigned int	b4;
}					t_uni;


int					print_part_of_format_str(int a, int b, const char *string);
void				print_format(t_format format);

int					set_format(const char *format, int start, va_list formats,
																	int *size);
void				manage_char(t_format *fmt);
void				set_default(t_format *fmt);

int					ft_printf(const char *format, ...);
void				ft_putchar(unsigned int u);
int					ft_putstr(char *str);
int					ft_strlen(const char *str);
int					ft_atoi(const char *str);
char				*ft_itoa_base_signed(intmax_t value, int base);
char				*ft_itoa_base_unsigned(uintmax_t value, int base);

#endif
