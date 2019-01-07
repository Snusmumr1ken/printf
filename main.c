#include "libp.h"

int		main()
{
	int size1;
	int size2;
	int value = 45;

	ft_printf("____________TESTS_____________\n\n");
	ft_printf("____________TESTS_____________\n\n");
	ft_printf("____________TESTS_____________\n\n");
	ft_printf("____________TEST1_____________\n");
	size1 = ft_printf("%14o\n", value);
	size2 = printf("%14o\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST2_____________\n");
	size1 = ft_printf("%014o\n", value);
	size2 = printf("%014o\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST3_____________\n");
	size1 = ft_printf("%#14o\n", value);
	size2 = printf("%#14o\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST4_____________\n");
	size1 = ft_printf("%-14o\n", value);
	size2 = printf("%-14o\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST1_____________\n");
	size1 = ft_printf("%-#14o\n", value);
	size2 = printf("%-#14o\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST1_____________\n");
	size1 = ft_printf("%14.4o\n", value);
	size2 = printf("%14.4o\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");

	ft_printf("____________TEST1_____________\n");
	size1 = ft_printf("%-#14.4o\n", value);
	size2 = printf("%-#14.4o\n", value);
	ft_printf("size1 = %d\n", size1);
	ft_printf("size2 = %d\n\n", size2);
	ft_printf("______________________________\n\n");
	return (0);
}