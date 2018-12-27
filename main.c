#include "libp.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int size;

	size = ft_printf("α %%%%%%%% kekeke\n");
	printf("my size = %d\n", size);
	size = printf("α %%%%%%%% kekeke\n");
	printf("standart size = %d\n", size);
	return (0);
}