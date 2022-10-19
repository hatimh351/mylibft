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

static void	check1(char *str, char *set)
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
				str[i] = 'x';
			}
			j++;
		}
		if (condition == 0)
			break ;
		i--;
	}
}

static void	check(char *str, char *set)
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
				str[i] = 'x';
			}
			j++;
		}
		if (condition == 0)
			break ;
		i++;
	}
	check1(str, set);
}

static char	*ft__alloc(char *str, size_t i)
{
	char	*p;
	size_t	n;
	size_t	l;

	l = 0;
	p = malloc(i * sizeof(char));
	if (!p)
		return (NULL);
	n = 0;
	while (str[l])
	{
		if (str[l] != 'x')
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
	char	*s1_p;

	if (!s1 || !set)
		return (0);
	s1_p = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s1_p)
		return (NULL);
	ft_strlcpy((char *)s1_p, s1, ft_strlen(s1) + 1);
	j = 0;
	if (*set == '\0')
		return ((char *)s1);
	check((char *)s1_p, (char *)set);
	i = 0;
	while (*(char *)(s1_p + i) != '\0')
	{
		if (*(char *)(s1_p + i) != 'x')
			j++;
		i++;
	}
	p = ft__alloc((char *)s1_p, j + 1);
	return (p);
}
