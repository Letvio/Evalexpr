/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloudmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 18:41:41 by jloudmer          #+#    #+#             */
/*   Updated: 2016/09/04 18:42:01 by jloudmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_line(char c_first, char c_mid, int nb, char c_end)
{
	if (nb >= -1)
	{
		ft_putchar(c_first);
		if (nb > 1)
		{
			while (nb > 0)
			{
				nb--;
				ft_putchar(c_mid);
			}
			ft_putchar(c_end);
		}
		ft_putchar('\n');
	}
}

void	colle(int x, int y)
{
	int nb;

	nb = x - 2;
	if (y > 0)
	{
		print_line('A', 'B', nb, 'A');
		while ((y - 2) > 0)
		{
			print_line('B', ' ', nb, 'B');
			y--;
		}
		if (y > 1)
		{
			print_line('C', 'B', nb, 'C');
		}
	}
}
