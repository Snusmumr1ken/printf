#include "libp.h"

int		main()
{
	int size1;
	int size2;
	signed int value = 45;

	ft_printf("____________TESTS_____________\n\n");
	ft_printf("____________TESTS_____________\n\n");
	ft_printf("____________TESTS_____________\n\n");
	ft_printf("____________TEST1_____________\n");
	size1 = ft_printf("%12d\n", value);
	size2 = printf("%12d\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST2_____________\n");
	size1 = ft_printf("%012d\n", value);
	size2 = printf("%012d\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST3_____________\n");
	size1 = ft_printf("% 012d\n", value);
	size2 = printf("% 012d\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST4_____________\n");
	size1 = ft_printf("%+12d\n", value);
	size2 = printf("%+12d\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST5_____________\n");
	size1 = ft_printf("%+012d\n", value);
	size2 = printf("%+012d\n", value);
	printf("size1 = %d\n", size1);
	printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST6_____________\n");
	size1 = ft_printf("%-12d\n", value);
	size2 = printf("%-12d\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST7_____________\n");
	size1 = ft_printf("%- 12d\n", value);
	size2 = printf("%- 12d\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST8_____________\n");
	size1 = ft_printf("%-+12d\n", value);
	size2 = printf("%-+12d\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST9_____________\n");
	size1 = ft_printf("%12.4d\n", value);
	size2 = printf("%12.4d\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST10_____________\n");
	size1 = ft_printf("%-12.4d\n", value);
	size2 = printf("%-12.4d\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");
	return (0);
}