/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:11:09 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 00:18:24 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*find;
	unsigned char	*str;
	size_t 			i;
	size_t			j;

	find = (unsigned char *)haystack;
	str = (unsigned char *)needle;
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == find[j])
		{
			if (find[j + 1] == '\0')
				return (str + j);
			j++;
		}
		i++;
	}
	return (0);
}