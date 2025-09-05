int		max(int* tab, unsigned int len)
{
	int	i = 0;
	int	res = tab[i];

	while (i < len)
	{
		while (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}
