/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 03:08:54 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/13 22:11:18 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -11;
		nbr = n;
	}
	else
		nbr = n;
	if (n <= 9 && n >= 0)
	{
		ft_putchar_fd(n + 48, fd);
	}
	else if (nbr > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd((n % 10) + 48, fd);
	}
}
