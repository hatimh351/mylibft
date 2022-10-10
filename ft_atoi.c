/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:54:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/10 17:52:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*str_;
	int		i;
	int		signe;
	int		nbr;

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
	return (nbr);
}

int main()
{
	printf("%d\n",ft_atoi("-2147483649"));
	printf("%d",atoi("-2147483649"));

}
