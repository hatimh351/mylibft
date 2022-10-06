/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:37:06 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/06 22:43:10 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_;
	int		n;

	i = 0;
	n = 0;
	s_ = (char *)s;
	while (s_[i])
	{
		if (c == s_[i])
		{
			n = i;
		}
		i++;
	}
	if (n > 0)
		return (s_ + n);
	if (c == '\0')
		return (s_ + i);
	return (0);
}
