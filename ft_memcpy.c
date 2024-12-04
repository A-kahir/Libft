/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:39:10 by akahir            #+#    #+#             */
/*   Updated: 2024/11/16 10:00:58 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	if (!dst && !src)
	{
		return (NULL);
	}
	if (dst == src)
	{
		return (dst);
	}
	dest = (char *)dst;
	source = (const char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
