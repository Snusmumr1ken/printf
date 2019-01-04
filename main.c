#include "libp.h"

int		main(int argc, char **argv)
{
	int size;

	size = ft_printf("%%\n");
	printf("my size = %d\n", size);


	size = printf("%%\n");
	printf("standart size = %d\n", size);
	return (0);
}