/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:03:29 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 19:28:11 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*first_alloc(char *str, char c)
{
	size_t	i;
	size_t	p;
	char	*p_;

	i = 0;
	p = 0;
	while (str[i])
	{
		if (str[i] == c)
			p++;
		i++;
	}
	p_ = malloc(sizeof(char *) * p + sizeof(char *));
	if (!p_)
		return (0);
	return (p_);
}

void	second_alloc(char *str, char c, char **p)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	i = 0;
	while (str[i])
	{
		j++;
		if (str[i] == c)
		{
			p[k] = malloc((j * sizeof(char)));
			if (p[k++] == 0)
				free(p);
			j = 0;
		}
		i++;
	}
	j = 0;
	while (str[i] != 'n')
	{
		j++;
		i--;
	}
	p[k] = malloc(j * sizeof(char));
	if (p[k] == 0)
		free(p);
}

void	final_R(char *str,char c,char **p)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			j = 0;
			while (j)


			
		}
	}
	
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**p;

	str = (char *)s;
	p = first_alloc(str, c);
	second_alloc(str, c, p);
	final_R(str,c,p);
}
