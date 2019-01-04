#include "libp.h"

int		manage_pointer(va_list *ap)
{
	void			*p;
	unsigned int	dig;
	char			buf[15] = "0x000000000000";

	buf[4] = buf[5];
	p = va_arg(*ap, void*);
	for (int * j = p , k = 13 ; j ; j = (void*)(((size_t)j) >> 4) , -- k)
	{
		dig = ((size_t)j) % 0x10;
		if (dig < 10)
			buf[k] = '0'+ dig;
		else
			buf[k] = 'a' + (dig - 10);
	}
	write(1, buf, 15);
	return (15);
}

/*нужно обработать минимальную ширину, минус, плюс, пробел*/