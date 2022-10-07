/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:30:12 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 14:55:39 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	p = malloc(count * size);
	if (!p)
		return (0);
	while (i < count * size)
	{
		*(char *)(p + i) = 0;
		i++;
	}
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*p;
	char	*s1_;
	char	*s2_;
	int		j;

	s1_ = s1;
	s2_ = s2;
	j = ft_strlen(s1_);
	j += ft_strlen(s2_);
	p = ft_calloc(2, j);
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
