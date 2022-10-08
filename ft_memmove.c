/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:20:34 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/08 16:34:06 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_;
	unsigned char	*src_;
	size_t			i;
	unsigned char	c;
	unsigned char	l;

	i = 0;
	dst_ = (unsigned char *)dst;
	src_ = (unsigned char *)src;
	c = src_[0];
	while (i < len)
	{
		l = src_[i + 1];
		dst_[i] = c;
		c = l;
		i++;
	}
	return (dst);
}
