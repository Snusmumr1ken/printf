#include "libp.h"

int		main(int argc, char **argv)
{
	int size;

	size = ft_printf("%c\n%10c\n", 'a', 'b');
	printf("my size = %d\n", size);
	size = printf("%c\n%10c\n", 'a', 'b');
	printf("standart size = %d\n", size);
	return (0);
}