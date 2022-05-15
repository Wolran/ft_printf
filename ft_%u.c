#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	static int count = 0;

	if (n > 9)
	{
		ft_putnbr_u(n / 10);
		ft_putnbr_u(n % 10);
	}
	else
	{
		ft_putchar_mod(n + 48);
		count++;
	}
	return (count);
}