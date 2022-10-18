/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:14:02 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/17 23:36:31 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_;

	i = 0;
	s_ = (char *)s;
	while (s_[i])
	{
		if (c == s_[i])
			return (s_ + i);
		i++;
	}
	if (c == '\0' && s_[i] == '\0')
		return (s_ + i);
	return (0);
}
