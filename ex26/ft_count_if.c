/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuikkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:52:47 by asuikkan          #+#    #+#             */
/*   Updated: 2021/11/02 12:04:29 by asuikkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}
