/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 16:35:35 by dolim             #+#    #+#             */
/*   Updated: 2018/08/03 16:35:36 by dolim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
		return (i);
	if ((j <= k && j >= i) || (j <= i && j >= k))
		return (j);
	if ((k <= i && k >= j) || (k <= j && k >= i))
		return (k);
}
