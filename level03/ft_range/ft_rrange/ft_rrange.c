/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 07:47:01 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/05 08:27:56 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*tab;

	if (start > end)
		len = start - end + 1;
	else 
		len = end - start + 1;
	tab = malloc(len * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < len)
	{
		if (end >= start)
			tab[i] = end - i;
		else if
			tab[i] = end + i;
		i++;
	}
	return (tab);
}
