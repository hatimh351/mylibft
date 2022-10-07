/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:03:44 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 14:32:41 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*p;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	p = malloc(i * sizeof(char) + sizeof(char));
	if (!p)
		return (0);
	i = 0;
	while (s1[i])
	{
		*(char *)(p + i) = s1[i];
		i++;
	}
	*(char *)(p + i) = '\0';
	return (p);
}
