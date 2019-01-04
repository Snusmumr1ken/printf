#include "libp.h"

int		main()
{
	int something = 10231123;

	ft_printf("%20p\n", &something);
	printf("% -20p\n", &something);
	return (0);
}