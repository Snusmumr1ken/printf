#include "libp.h"

/*фукнция которая выводит всё от указанной точки до символа '%' */
int			print_part_of_format_str(int a, const char *string, int *size_of_output)
{
	while (string[a] != '%' && string[a] != '\0')
	{
		write(1, &string[a], 1);
		a++;
		*size_of_output += 1;
	}
	return (a);
}

int			ft_strlen(const char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}