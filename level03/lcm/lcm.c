/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:40:52 by dortega-          #+#    #+#             */
/*   Updated: 2025/09/02 20:45:10 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;
	if (a == 0 || b == 0)
		return (0);
	if (a < b)
		n = b;
	else
		n = a;
	while ((n % a != 0) || (n % b != 0))
		n++;
	return (n);
}
