#include "../libft.h"

static	void 	ft_positive(char *str, int n)
{
	int	i;

	int div;
	div = 1000000000;
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return;
	}
	i = -1;
	while (!(n/div))
		div = div / 10;
	while (div > 0)
	{
		str[++i] = '0' + (n / div);
		n = n % div;
		div = div / 10;
	}
	str[i + 1] = '\0';
}

char			*ft_itoa(int n)
{
	char *str;

	if ((str = (char*)malloc(12 * sizeof(char))))
	{
		if (n ==  -2147483648)
			str = "-2147483648\0";
		else if (n < 0)
		{
			str[0] = '-';
			n = n * (-1);
			ft_positive(str + 1, n);
		}
		else
			ft_positive(str, n);
	}
	return (str);
}