#include <unistd.h>

void	ft_putnbr(int num)
{
	char *str = "0123456789";

	if (num > 9)
	{
		ft_putnbr(num /= 10);
	}
	write (1, &str[num % 10], 1);
}

int	main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write (1, "\n", 1);
	return (0);	
}
