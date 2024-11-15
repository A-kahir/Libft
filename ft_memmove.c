/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <aymanekahir036@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:16:17 by akahir            #+#    #+#             */
/*   Updated: 2024/11/15 12:50:42 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	overlap(char *dest, const char *source, size_t len)
{
	while (len > 0)
	{
		len--;
		dest[len] = source[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;
	size_t		i;

	if ((dst == NULL) || (src == NULL))
		return (NULL);
	if (src == dst)
		return (dst);
	dest = (char *)dst;
	source = (const char *)src;
	if (dest > source)
		overlap(dest, source, len);
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
