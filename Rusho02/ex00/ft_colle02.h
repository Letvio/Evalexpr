/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle02.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:15:08 by aroche            #+#    #+#             */
/*   Updated: 2016/09/18 19:35:43 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE02_H

# define FT_COLLE02_H

# include <unistd.h>
# include <stdlib.h>

int		ft_nblines(char *str);
int		ft_nbrows(char *str);
void	ft_put(int colle, int l, int r);
int		ft_aff(char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_recup(void);
int		ft_strlen_line(char *str);
int		ft_check_line(char c_first, char c_mid, char c_last, char *str);
int		ft_check_colle00(char *str, int lines);
int		ft_check_colle01(char *str, int lines);
int		ft_check_colle02(char *str, int lines);
int		ft_check_colle03(char *str, int lines);
int		ft_check_colle04(char *str, int lines);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
