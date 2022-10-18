/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:38:43 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/17 22:36:23 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (new != 0 && lst != 0)
	{
		if (!(*lst))
		{
			*lst = new;
			new->next = 0;
		}
		else
		{
			node = (*lst);
			while (node->next != 0)
				node = node->next;
			node->next = new;
			new->next = 0;
		}
	}
}
