/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:04:01 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/03 13:33:28 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rostring(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] && str[i] == ' ' || str[i] == '\t')
		i++;
	j = i;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		while (str[i] && str[i] == ' ' || str[i] == '\t')
        	i++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t') 
			&& (str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
			{
				write(1, &str[i], 1);
				i++;
			}
			write (1, " ", 1);
			i++;
		}
	}

	while (str[j] && str[j] != ' ' && str[j] != '\t')
	{	
		write(1, &str[j], 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac >= 2)
		rostring(av[1]);
	write(1, "\n", 1);
}
