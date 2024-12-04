/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:53:42 by akahir            #+#    #+#             */
/*   Updated: 2024/11/16 11:33:02 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (lst == NULL)
	{
		return (0);
	}
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
