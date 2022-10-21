/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:30:12 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/21 10:24:46 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*p;
	char	*s1_;
	char	*s2_;
	int		j;

	if (s1 == 0 || s2 == 0)
		return (0);
	s1_ = (char *)s1;
	s2_ = (char *)s2;
	j = ft_strlen(s1_);
	j += ft_strlen(s2_);
	p = malloc(j + 1);
	if (!p)
		return (0);
	j = 0;
	i = 0;
	while (s1_[i])
		p[i++] = s1_[j++];
	j = 0;
	while (s2_[j])
		p[i++] = s2_[j++];
	p[i] = '\0';
	return (p);
}
