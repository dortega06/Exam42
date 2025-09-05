/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:23:56 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/02 20:30:09 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res = 0;
	while (*str == ' ' || *str >= 9 && *str <= 13)
		str++;
	while (*str >= '0' && *str <= '9') 
	{
		res = res * 10;
		res = res + *str - '0';
		++str;
	}
	return (res);
}

void ft_putnbr(int num)
{
	char *str = "0123456789abcdef";
	if (num >= 16)
		ft_putnbr(num / 16);
	write (1, &str[num % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(ft_atoi(av[1]));
	}
}
