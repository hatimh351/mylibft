/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:12:54 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/10/07 17:12:54 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}


void	check_2(char *str, char *set,size_t len_str, size_t len_set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(str) - 1;
	while(i >0)
	{
		
		j = ft_strlen(set) - 1;
		while (j >0)
		{
			if (set[j] == str[i])
			{
				str[i] = 1;
				set[j] = 1;
			}
			j--;
		}
		i--;
	}
}

void	check_1(char *str, char *set)
{
	size_t	i;
	size_t	j;
	size_t	len_str;
	size_t	len_set;

	len_str = ft_strlen(str);
	len_set = ft_strlen(set);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == str[i])
			{
				str[i] = 1;
				check_2(str, set,len_str,len_set);
			}
			j++;
		}
		i++;
	}
}


int main()
{
  char h[]= "hatimm ilyassa";
  char set[]= "ha";
  check_1(h,set);
	printf("%s",h);
}


