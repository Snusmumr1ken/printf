#include "libp.h"

int main(void)
{
	int size = printf("%9.2p\n", 1234);
	ft_printf("size = %d\n\n", size);
	size = ft_printf("%9.2p\n", 1234);
	ft_printf("size = %d\n\n", size);
	return 0;
}