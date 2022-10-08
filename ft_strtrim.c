/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:12:54 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 17:12:54 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_alloc(char *str, char *trim)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	p;
	char	*s;

	i = 0;
	p = 0;
	while (str[i])
	{
		n = 1;
		j = 0;
		while (trim[j])
		{
			if (str[i] == trim[j])
				n = 0;
			j++;
		}
		if (n == 1)
			p++;
		i++;
	}
	return (s = malloc(sizeof(char) * p + 1));
}

void	final_r(char *p, char *str, char *trim)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	n;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		n = 1;
		while (trim[j])
		{
			if (str[i] == trim[j])
				n = 0;
			j++;
		}
		if (n == 1)
			p[k++] = str[i];
		i++;
	}
	p[k] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*trim;
	char	*p;

	str = (char *)s1;
	trim = (char *)set;
	p = ft_alloc(str, trim);
	final_r(p, str, trim);
	return (p);
}
