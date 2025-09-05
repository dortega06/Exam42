/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:58:28 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/02 19:08:44 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int	len = 0;
	int	i = 0;
	char *new;
	while (src[len])
		len++;
	new = malloc(sizeof(*new) * (len + 1));
	if (new != NULL)
	{
		while (src[i])
		{
			new[i] = src[i];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}

int	main()
{
	printf("%s", ft_strdup("HOLIII"));
}
