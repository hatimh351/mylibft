/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:00:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/11 05:13:39 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	how_many_number(long n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*p;
	long	i;

	nbr = (long)n;
	i = how_many_number(nbr);
	if (nbr == 0)
		return (ft_strdup("0"));
	p = ft_calloc(i, 1);
	if (!p)
		return (0);
	if (nbr < 0)
	{
		p[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		p[i - 1] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	return (p);
}

int main()
{
	char *p = ft_itoa(31331113);
	printf("%s",p);
}
