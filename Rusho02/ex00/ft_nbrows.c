/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrows.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:06:54 by aroche            #+#    #+#             */
/*   Updated: 2016/09/18 19:09:46 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

int		ft_nbrows(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\n')
		i++;
	return (i);
}
