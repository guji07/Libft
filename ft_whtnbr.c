int		ft_whtnbr(int num)
{
	int i;

	if (num > 0)
		i = 0;
	if ((num < 0) && (num > (-2147483648)))
		i = 1;
	if (num == -2147483648)
		i = 2;
	return (i);
}