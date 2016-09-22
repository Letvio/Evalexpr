/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 23:30:38 by mkrebs            #+#    #+#             */
/*   Updated: 2016/09/18 19:29:19 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

int		ft_strlen_line(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		ft_check_line(char c_first, char c_mid, char c_last, char *str)
{
	int i;
	int length;

	i = 1;
	length = ft_strlen_line(str);
	if (str[0] != c_first)
		return (0);
	ft_putchar('y');
	if (length > 1)
	{
		if (str[length - 1] != c_last)
			return (0);
	}
	if (length > 2)
	{
		while (i < length - 1)
		{
			if (str[i] != c_mid)
				return (0);
			i++;
		}
	}
	return (1);
}
