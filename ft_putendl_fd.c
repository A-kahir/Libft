/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:34:29 by akahir            #+#    #+#             */
/*   Updated: 2024/11/05 17:30:40 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	size;

	size = 0;
	if (fd < 0)
	{
		return ;
	}
	if (s == NULL)
	{
		return ;
	}
	while (s[size] != '\0')
	{
		size++;
	}
	write(fd, s, size);
	write(fd, "\n", 1);
}
