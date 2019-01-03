#include "libp.h"

int		main(int argc, char **argv)
{
	int size;

	size = ft_printf("%12s\n", "zap");
	printf("my size = %d\n", size);
	size = printf("%12s\n", "zap");
	printf("standart size = %d\n", size);
	return (0);
}