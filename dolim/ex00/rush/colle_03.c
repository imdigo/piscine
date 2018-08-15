/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbixby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 10:28:36 by brbixby           #+#    #+#             */
/*   Updated: 2018/07/29 11:02:34 by brbixby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top(int x, int y)
{
	int	i;

	i = 1;
	if (y > 0 && x > 0)
	{
		ft_putchar('A');
		while (i + 1 < x)
		{
			ft_putchar('B');
			i++;
		}
		if (i + 1 == x && x != 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	mid(int x, int y)
{
	int	rows;
	int	cols;

	rows = 0;
	if (y > 2 && x > 0)
	{
		while (rows++ < y - 2)
		{
			cols = 1;
			ft_putchar('B');
			while (cols + 1 < x)
			{
				ft_putchar(' ');
				cols++;
			}
			if (cols + 1 == x)
				ft_putchar('B');
			ft_putchar('\n');
		}
	}
}

void	bot(int x, int y)
{
	int	i;

	i = 1;
	if (y > 1 && x > 0)
	{
		ft_putchar('A');
		while (i + 1 < x)
		{
			ft_putchar('B');
			i++;
		}
		if (i + 1 == x && x != 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	top(x, y);
	mid(x, y);
	bot(x, y);
}
