/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuikkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:26:43 by asuikkan          #+#    #+#             */
/*   Updated: 2021/11/01 14:41:16 by asuikkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	len;
	int	start;
	int	i;

	if (min >= max)
		return (NULL);
	len = 0;
	start = min;
	while (start < max)
	{
		len++;
		start++;
	}
	range = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
