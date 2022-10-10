/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:26:03 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/10 03:54:13 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	p = malloc(count * size);
	if (!p)
	{
		free(p);
		return (0);
	}
	while (i < count * size)
	{
		*(char *)(p + i) = 0;
		i++;
	}
	return (p);
}
