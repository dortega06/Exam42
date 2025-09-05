/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:15:24 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/02 19:20:42 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_in_pos(char c, char *str)
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

int str_in_pos(char c, char *str)
{
    int pos = 0;
    while (str[pos])
    {
        if (str[pos] == c)
            return (pos);
        pos++;
    }
    return (pos);
}

void	inter(char *s1, char *s2)
{
	int	pos = 0;
	char c;
	while (s1[pos])
	{
		if (str_in_pos(s1[pos], s1) >= pos)
			if(char_in_pos(s1[pos], s2))
			{
				c = s1[pos];
				write(1, &c, 1);
			}
		pos++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}
