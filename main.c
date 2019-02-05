#include "libp.h"

int main(void)
{
	float num = 12.678;

	int size1 = ft_printf("%-+10.4f\n", num);
	int size2 = printf("%-+10.4f\n", num);

	printf("\n\nsize1 = %d\nsize2 = %d\n\n", size1, size2);
	return 0;
}