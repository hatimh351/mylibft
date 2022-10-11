/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:00:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/11 02:46:39 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	how_many_int(int n, char *p)
{
	int	i;
	int	f_10;
	int	j;

	j = 1;
	if (n == 0)
	{
		p[0] = 0 + 48;
		return (0);
	}
	if (n < 0)
		n *= -1;
	i = 0;
	f_10 = 1;
	while (i < 10)
	{
		if (f_10 <= n && n < f_10 * 10)
			break ;
		j++;
		i++;
		f_10 *= 10;
	}
	return (j);
}

void	final_resl(char *p, int n, int j)
{
	int		i;
	char	c;

	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
		while (j > 0)
		{
			c = n % 10 + 48;
			p[j] = c;
			n = n / 10;
			j--;
		}
	}
	else
	{	
		while (j > -1)
		{
			c = n % 10 + 48;
			p[j] = c;
			n = n / 10;
			j--;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;
	int		l;

	l = how_many_int(n, p);
	p = (char *)ft_calloc(1, 12);
	if (!p)
		return (0);
	if (l == 0)
		return (p);
	if (n < 0)
		l++;
	final_resl(p, n, l - 1);
	return (p);
}

int main()
{
	char *p = ft_itoa(+13312);
	printf("%s",p);
}
