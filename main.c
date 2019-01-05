#include "libp.h"

int		main()
{
	int something = 10231123;

	ft_printf("% p\n", &something);
	printf("% p\n", &something);
	return (0);
}