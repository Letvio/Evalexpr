/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 17:33:15 by aroche            #+#    #+#             */
/*   Updated: 2016/09/18 17:53:10 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

char		*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ret;

	ret = NULL;
	if (s1 && s2)
	{
		j = ft_strlen(s1) + ft_strlen(s2);
		i = 0;
		if (!(ret = malloc(sizeof(char) * (j + 1))))
			return (NULL);
		while (*s1)
			ret[i++] = *s1++;
		while (*s2)
			ret[i++] = *s2++;
		ret[i] = 0;
	}
	else if (s1)
		return (ft_strdup(s1));
	else if (s2)
		return (ft_strdup(s2));
	return (ret);
}
