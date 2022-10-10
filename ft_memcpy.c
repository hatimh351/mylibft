/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:55:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/10 17:57:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, void *restrict src, size_t len)
{
	size_t			i;
	unsigned char	*dest_;
	unsigned char	*src_;

	if (!dest)
		return (0);
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
	return (dest);
}
