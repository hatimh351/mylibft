/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:54:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/17 21:12:26 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*str_;
	int		i;
	long	signe;
	long	nbr;

	i = 0;
	nbr = 0;
	signe = 1;
	str_ = (char *)str;
	while ((str_[i] <= 13 && str_[i] >= 9) || str_[i] == ' ')
		i++;
	if (str_[i] == '+' || str_[i] == '-')
	{
		if (str_[i] == '-')
			signe *= -1;
		i++;
	}
	while (str_[i] <= '9' && str_[i] >= '0')
	{
		nbr = nbr * 10 + (str_[i] - 48);
		i++;
	}
	return (nbr * signe);
}
