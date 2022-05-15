#include "ft_printf.h"

int	ft_putnbr_mod(int n)
{
	unsigned int	test;

	if (n < 0)
	{
		test = n * -1;
		ft_putchar_mod('-');
	}
	else
		test = n;
	if (test > 9)
		ft_putnbr_mod(test / 10);
	ft_putchar_mod('0' + (test % 10));
	return (ft_dec_len(test));
}

static int	ft_dec_len(int nb)
{
	size_t			count;
	long long int	nbr;

	count = 0;
	nbr = nb;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
