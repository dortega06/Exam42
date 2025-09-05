/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:02:56 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/05 07:46:35 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     *ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*tab;

	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	tab = malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		if (start <= end)
			tab[i] = start + i;
		else if
			tab[i] = start - i;
		i++;
	}
	return (tab);
}
