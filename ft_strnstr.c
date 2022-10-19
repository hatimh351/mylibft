/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:11:09 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/18 22:38:02 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*find;
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)haystack;
	find = (char *)needle;
	if (len == 0 || find[0] == '\0')
		return (str);
	if (len == 0 && str == 0)
		return (0);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == find[j] && str[i + j] && i + j < len)
		{
			if (find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
