/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:54:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/20 05:10:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	final_result(char *str_, int signe)
{
	long long	nbr;
	long long	kifkif;
	int			i;

	i = 0;
	nbr = 0;
	while (str_[i] <= '9' && str_[i] >= '0')
	{
		kifkif = nbr;
		nbr = nbr * 10 + (str_[i] - 48);
		if (kifkif != nbr / 10 && signe == -1)
			return (0);
		else if (kifkif != nbr / 10 && signe == 1)
			return (-1);
		i++;
	}
	return (nbr * signe);
}

int	ft_atoi(const char *str)
{
	char		*str_;
	int			i;
	int			signe;

	i = 0;
	signe = 1;
	str_ = (char *)str;
	while ((str_[i] <= 13 && str_[i] >= 9) || str_[i] == ' ')
		i++;
	if (str_[i] == '+' || str_[i] == '-')
	{
		if (str_[i++] == '-')
			signe *= -1;
	}
	return (final_result(str_ + i, signe));
}
