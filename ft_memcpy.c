/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:55:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/06 23:50:27 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, void *restrict src, size_t len)
{
	size_t			i;
	unsigned char	*dest_;
	unsigned char	*src_;

	if (len == 0)
		return (dest);
	dest_ = (unsigned char *)dest;
	src_ = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		dest_[i] = src_[i];
		i++;
	}
	return (dest_);
}
