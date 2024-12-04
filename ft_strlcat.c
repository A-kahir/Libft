/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:49:35 by akahir            #+#    #+#             */
/*   Updated: 2024/11/16 10:06:09 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (dstsize == 0)
	{
		return (len_src);
	}
	len_dest = ft_strlen(dst);
	if (dstsize <= len_dest)
	{
		return (dstsize + len_src);
	}
	i = 0;
	while (src[i] && (len_dest + i + 1 < dstsize))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
