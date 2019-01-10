#include "libp.h"

int main()
{
	char res[20];
	float n = 233.999;
	ftoa(n, res, 2);
	ft_printf("\"%s\"\n", res);
	printf("%.2f\n", n);
	return 0;
}