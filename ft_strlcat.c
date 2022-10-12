/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:44:35 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/12 03:14:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if ((dstsize <= dst_len) || src == 0 || dst == 0)
		reurn(0);
	i = 0;
	while ((dst_len + i < dstsize - 1) && src[i])
	{
			dst[dst_len + i] = src[i];
			i++;
	}
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
