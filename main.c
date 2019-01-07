#include "libp.h"

int		main()
{
	int size1;
	int size2;
	unsigned value = -45;

	ft_printf("____________TESTS_____________\n\n");
	ft_printf("____________TEST1_____________\n");
	size1 = ft_printf("%15llu\n", value);
	size2 = printf("%15llu\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST2_____________\n");
	size1 = ft_printf("%014u\n", value);
	size2 = printf("%014u\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST3_____________\n");
	size1 = ft_printf("%#14u\n", value);
	size2 = printf("%#14u\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST4_____________\n");
	size1 = ft_printf("%#014u\n", value);
	size2 = printf("%#014u\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST5_____________\n");
	size1 = ft_printf("%-14u\n", value);
	size2 = printf("%-14u\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST6_____________\n");
	size1 = ft_printf("%-#14u\n", value);
	size2 = printf("%-#14u\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST7_____________\n");
	size1 = ft_printf("%14.4u\n", value);
	size2 = printf("%14.4u\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST8_____________\n");
	size1 = ft_printf("%-14.4u\n", value);
	size2 = printf("%-14.4u\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");
	return (0);
}