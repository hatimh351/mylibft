/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:20:34 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/12 05:48:09 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_;
	char	*src_;

	src_ = (char *)src;
	dst_ = (char *)dst;
	if (!dst || !src)
		return (0);
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			dst_[len - i - 1] = src_[len - i - 1];
			i++;
		}	
	}
	else
	{
		while (i < len)
			dst_[i] = src_[i];
			i++;
	}
	return (dst);
}
