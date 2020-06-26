/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kratlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:42:43 by kratlou           #+#    #+#             */
/*   Updated: 2020/06/26 09:09:35 by kratlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_power(int nb, int power)
{
	int total = 1;
	int a = 0;

	if(power == 0)
	{
		return 1;
	}

	while(a < power)
	{
		total = total *  nb;
		a++;
	}
	return total;
}

