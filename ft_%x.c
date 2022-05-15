#include "ft_printf.h"

static int	ft_taille(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len += 1;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

int	ft_hex(unsigned int nbr, char *base)
{
	int			point;
	int			count;
	int			len;
	char		*str;

	if (nbr == 0)
	{
		count = write (1, "0", 1);
		return (count);
	}
	len = ft_taille(nbr);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		point = nbr % 16;
		str[len] = base[point];
		nbr /= 16;
	}
	count = ft_putstr_mod(str);
	free(str);
	return (count);
}
