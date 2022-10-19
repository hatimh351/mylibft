/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:52:20 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/19 05:47:59 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_;
	unsigned char	*s2_;
	size_t			i;

	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	if (s1_[0] == '\0' || s2_[0] == '\0')
		return (s1_[0] - s2_[0]);
	i = 0;
	while (i < n)
	{
		if (s1_[i] != s2_[i])
			return (s1_[i] - s2_[i]);
		i++;
	}
	return (0);
}
