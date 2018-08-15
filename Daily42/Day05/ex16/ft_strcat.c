/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 22:11:16 by dolim             #+#    #+#             */
/*   Updated: 2018/07/30 22:23:27 by dolim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		count;

	count = 0;
	while (*dest != '\0')
	{
		dest++;
		count++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (dest - count);
}