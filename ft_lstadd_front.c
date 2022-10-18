/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:04:20 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/18 00:08:31 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tp;

	if (lst != 0 && new != 0)
	{
		if (!(*lst))
		{
			*lst = new;
			new->next = 0;
		}
		else
		{
			tp = *lst;
			*lst = new;
			new->next = tp;
		}
	}
}
