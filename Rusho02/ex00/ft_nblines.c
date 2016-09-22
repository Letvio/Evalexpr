/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:01:16 by aroche            #+#    #+#             */
/*   Updated: 2016/09/18 19:09:25 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

int		ft_nblines(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] == '\n')
			ret++;
		i++;
	}
	return (ret);
}