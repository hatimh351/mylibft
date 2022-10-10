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

void	check1(char *str, char *set)
{
	size_t	i;
	size_t	j;
	size_t	condition;

	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		j = 0;
		condition = 0;
		while (set[j])
		{
			if (str[i] == set[j])
			{
				condition = 1;
				str[i] = 1;
			}
			j++;
		}
		if (condition == 0)
			break ;
		i--;
	}
}

void	check(char *str, char *set)
{
	size_t	i;
	size_t	j;
	size_t	condition;

	i = 0;
	while (str[i])
	{
		j = 0;
		condition = 0;
		while (set[j])
		{
			if (str[i] == set[j])
			{
				condition = 1;
				str[i] = 1;
			}
			j++;
		}
		if (condition == 0)
			break ;
		i++;
	}
	check1(str, set);
}

char	*ft__alloc(char *str, size_t i)
{
	char	*p;
	size_t	n;
	size_t	l;

	l = 0;
	p = malloc(i * sizeof(char) + 1);
	if (!p)
	{
		free(p);
		return (0);
	}
	n = 0;
	while (str[l])
	{
		if (str[l] != 1)
			p[n++] = str[l];
		l++;
	}
	p[n] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p;

	j = 0;
	if (!s1 && !set)
		return (0);
	check((char *)s1, (char *)set);
	i = 0;
	while (*(char *)(s1 + i) != '\0')
	{
		if (*(char *)(s1 + i) != 1)
			j++;
		i++;
	}
	p = ft__alloc((char *)s1, j);
	if (!p)
		return (0);
	return (p);
}
