#include "ft_printf.h"

static int	ft_verif(const char *str, int i, va_list args)
{
	if (str[i] == 'c')
		retrun (ft_putchar_mod(va_arg(args, int));
	else if (str[i] == 's')
		retrun (ft_putstr_mod(va_arg(args, char *));
	else if (str[i] == 'p')
		retrun (ft_argp(va_arg(args, void *));
	else if (str[i] == 'd')
		retrun (ft_putnbr_mod(va_arg(args, int)));
	else if (str[i] == 'i')
		retrun (ft_putnbr_mod(va_arg(args, int)));
	else if (str[i] == 'u')
		retrun (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (str[i] == 'x')
		retrun (ft_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (str[i] == 'X')
		retrun (ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (str[i] == '%')
		retrun (ft_pourcentage());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		nb_args

	va_start(args, str);
	i = 0;
	nb_args = 0;
	while(str[i])
	{
		if(str[i] == '%' && str[i + 1] )
		{
			nb_args += ft_verif(str, i + 1, args);
			i++;
		}
		else
			nb_args += ft_putchar_mod(str[i]);
		if(str[i])
			return (nb_args);
		i++;
	}
	va_end(args);
	return (nb_args);
}
