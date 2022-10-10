/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:43:31 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/09 17:37:12 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char *str, char c)
{
	size_t	j;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		j = 1;
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
		{
			if (j == 1)
			{
				n++;
				j = 0;
			}
			i++;
		}
	}
	return (n);
}

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

void	free_p(char **p)
{
	size_t	i;

	i = 0;
	while (p[i] != 0)
		free(p[i]);
	p = 0;
}

void	ft_alloc_string(char **p, char *str, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && str[i])
		{
			start = i;
			j = 0;
			while (str[i + j] != c && str[i + j])
				j++;
			p[k++] = ft_substr(str, start, j);
			i += j;
			if (!p)
				free_p(p);
		}
		if (str[i] == '\0')
			break ;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**p;

	i = word_count((char *)s, c);
	p = malloc(sizeof(char *) * i + sizeof(char *));
	if (!p)
	{
		free(p);
		return (0);
	}
	p[i] = 0;
	ft_alloc_string(p, (char *)s, c);
	if (p == 0)
	{
		free(p);
		return (0);
	}
	return (p);
}