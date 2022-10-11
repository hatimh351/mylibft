/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:10:25 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/11 21:01:41 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	char	p;
	size_t	j;

	str = (char *)s;
	i = (int)ft_strlen(str);
	p = malloc(i * sizeof(char) + 1);
	p[i] = '\0';
	if (!p || !s)
		return (0);
	j = 0;
	while (p[j])
	{
		p[j] = (*f)(i, str[i]);
		j++;
	}
	return (p);
}
