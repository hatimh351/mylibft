/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:36:42 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 13:23:58 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	c_;
	unsigned char	str;

	str = (unsigned char)b;
	c_ = (unsigned char )c;
	i = 0;
	while (i < len)
	{
		*(str) = c_;
		i++;
	}
	return (b);
}
