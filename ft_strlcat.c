/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:44:35 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/11 20:10:08 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char dst, const char src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dst[i])
		i++;
	j = i;
	if (dstsize <= i)
		return (0);
	k = 0;
	while (src[k] && i < dstsize - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	j += i;
	return (j);
}
