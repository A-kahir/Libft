/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:05:08 by akahir            #+#    #+#             */
/*   Updated: 2024/11/05 17:30:37 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	size;

	if (fd < 0)
	{
		return ;
	}
	if (s == NULL)
	{
		return ;
	}
	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	write(fd, s, size);
}
