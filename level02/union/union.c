/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:39:45 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/02 19:54:36 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pos_in_char(char c, char *str)
{
	int	pos = 0;
	while (str[pos])
	{
		if (str[pos] == c)
			return (1);
		pos++;
	}
	return (0);
}

int	pos_in_str(char c, char *str)
{
	int	pos = 0;
	while (str[pos])
	{
		if (str[pos] == c)
			return (pos);
		pos++;
	}
	return (pos);
}

void ft_union(char *s1, char *s2)
{
	int	pos = 0;
	while (s1[pos])
	{
		if (pos_in_str(s1[pos], s1) >= pos)
			write(1, &s1[pos], 1);
		pos++;
	}
	pos = 0;
	while (s2[pos])
	{
		if (!pos_in_char(s2[pos], s1) && pos_in_str(s2[pos], s2) >= pos)
				write(1, &s2[pos], 1);
		pos++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}
