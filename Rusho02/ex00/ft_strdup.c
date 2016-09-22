/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 17:38:43 by aroche            #+#    #+#             */
/*   Updated: 2016/09/18 17:52:56 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

char		*ft_strdup(char *s1)
{
	int		i;
	char	*ret;

	if ((ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
	{
		i = 0;
		while (s1[i] != 0)
		{
			ret[i] = s1[i];
			i++;
		}
		ret[i] = 0;
		return (ret);
	}
	return (NULL);
}
