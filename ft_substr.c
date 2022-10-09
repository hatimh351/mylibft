/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:16:22 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/09 16:47:52 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;
	char			*str;

	str = (char *)s;
	i = 0;
	p = (char *)malloc((len * sizeof(char)) + 1);
	if (!p)
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = str[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
