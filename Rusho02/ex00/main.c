/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 16:49:35 by aroche            #+#    #+#             */
/*   Updated: 2016/09/18 19:19:42 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

int			main(void)
{
	char	*str;
	int		aff;

	str = ft_recup();
	aff = ft_aff(str);
	if (aff == 0)
		ft_putstr("aucune");
	free(str);
	ft_putchar('\n');
	return (0);
}
