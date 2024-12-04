/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:11:47 by akahir            #+#    #+#             */
/*   Updated: 2024/11/16 10:28:34 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	while (*lst != NULL)
	{
		now = *lst;
		*lst = (*lst)->next;
		del(now->content);
		free(now);
	}
}
