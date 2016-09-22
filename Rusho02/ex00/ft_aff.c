/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:33:25 by aroche            #+#    #+#             */
/*   Updated: 2016/09/18 19:20:07 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

int		(*g_tab_check[5])(char *, int) = {ft_check_colle00, ft_check_colle01,
	ft_check_colle02, ft_check_colle03, ft_check_colle04};

void	ft_put(int colle, int l, int r)
{
	ft_putstr("[colle-0");
	ft_putchar(colle + 48);
	ft_putstr("] [");
	ft_putnbr(r);
	ft_putstr("] [");
	ft_putnbr(l);
	ft_putchar(']');
}

int		ft_aff(char *str)
{
	int	i;
	int	l;
	int	r;
	int	aff;
	int (*ft_check)(char *, int);

	l = ft_nblines(str);
	r = ft_nbrows(str);
	aff = 0;
	i = -1;
	if (r > 0 && l > 0)
	{
		while (++i < 5)
		{
			ft_check = g_tab_check[i];
			if (ft_check(str, l))
			{
				if (aff)
					ft_putstr(" || ");
				ft_put(i, l, r);
				aff = 1;
			}
		}
	}
	return (aff);
}
