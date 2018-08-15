/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 15:40:23 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/16 15:40:26 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (nb);
	}
	while (i <= nb / 2)
	{
		i++;
		if (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}