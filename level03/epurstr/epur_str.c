/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:07:52 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/04 15:40:46 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur(char *str)
{
	int	i = 0;
	int	flag = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
			flag = 1;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			if (flag)
				write(1, " ", 1);
			flag = 0;
			write (1, &str[i], 1);
			i++;
		}
		
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur(av[1]);
	write (1, "\n", 1);
}
