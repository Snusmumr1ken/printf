#include "libp.h"

int		main()
{
	unsigned long long something = 18446744073709551615;

	printf("%s\n", ft_itoa_base_unsigned(something, 10));
	//printf("%o\n", something);
	return (0);
}