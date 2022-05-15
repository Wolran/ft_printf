#include "ft_printf.h"

static int	ft_hex_len(unsigned long nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		count++;
	}
}

int ft_argp(void *str)
{
	unsigned long test;
	
	test = (unsigned long)str;
	ft_putstr_mod("0x");
	ft_putnbr_base(test, "0123456789abcdef")
	retrurn (ft_hex_len(test) + 2);
}
