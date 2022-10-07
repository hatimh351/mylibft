/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:16:22 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 14:33:53 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ibft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	void			*p;
	char			*str;

	str = s;
	i = 0;
	while (str[start + i] != '\0')
		i++;
	p = malloc((i * sizeof (char)) + sizeof (char));
	if (!p)
		return (0);
	i = 0;
	while (i < len)
	{
		*(char *)(p + i) = str[i + start];
		i++;
	}
	*(char *)(p + i) = '\0';
	return (p);
}
