/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:54:04 by mkrebs            #+#    #+#             */
/*   Updated: 2016/09/18 19:29:08 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

int		ft_check_colle00(char *str, int lines)
{
	int i;
	int j;

	i = 0;
	j = 1;
	ft_putnbr(lines);
	if (ft_check_line('o', '-', 'o', &str[i]) == 0)
		return (0);
	else if (lines >= 1)
	{
		ft_putchar('w');
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	while (j < lines)
	{
		if (ft_check_line('|', ' ', '|', &str[i]) == 0)
			return (0);
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	if (lines > 1 && ft_check_line('o', '-', 'o', &str[i]) == 0)
		return (0);
	return (1);
}

int		ft_check_colle01(char *str, int lines)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (ft_check_line('/', '*', '\\', &str[i]) == 0)
		return (0);
	else if (lines >= 1)
	{
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	while (j < lines)
	{
		if (ft_check_line('*', ' ', '*', &str[i]) == 0)
			return (0);
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	if (lines > 1 && ft_check_line('\\', '*', '/', &str[i]) == 0)
		return (0);
	return (1);
}

int		ft_check_colle02(char *str, int lines)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (ft_check_line('A', 'B', 'A', &str[i]) == 0)
		return (0);
	else if (lines >= 1)
	{
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	while (j < lines)
	{
		if (ft_check_line('B', ' ', 'B', &str[i]) == 0)
			return (0);
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	if (lines > 1 && ft_check_line('C', 'B', 'C', &str[i]) == 0)
		return (0);
	return (1);
}

int		ft_check_colle03(char *str, int lines)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (ft_check_line('A', 'B', 'C', &str[i]) == 0)
		return (0);
	else if (lines >= 1)
	{
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	while (j < lines)
	{
		if (ft_check_line('B', ' ', 'B', &str[i]) == 0)
			return (0);
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	if (lines > 1 && ft_check_line('A', 'B', 'C', &str[i]) == 0)
		return (0);
	return (1);
}

int		ft_check_colle04(char *str, int lines)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (ft_check_line('A', 'B', 'C', &str[i]) == 0)
		return (0);
	else if (lines >= 1)
	{
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	while (j < lines)
	{
		if (ft_check_line('B', ' ', 'B', &str[i]) == 0)
			return (0);
		i = i + ft_strlen_line(str) + 1;
		j++;
	}
	if (lines > 1 && ft_check_line('C', 'B', 'A', &str[i]) == 0)
		return (0);
	return (1);
}
