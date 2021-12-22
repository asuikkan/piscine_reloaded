/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuikkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:28:48 by asuikkan          #+#    #+#             */
/*   Updated: 2021/11/01 11:03:58 by asuikkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	check_sqrt;

	check_sqrt = 1;
	if (nb <= 0)
		return (0);
	while (check_sqrt * check_sqrt <= nb)
	{
		if (check_sqrt * check_sqrt == nb)
			return (check_sqrt);
		check_sqrt++;
	}
	return (0);
}
