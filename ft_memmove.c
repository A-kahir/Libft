/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:16:17 by akahir            #+#    #+#             */
/*   Updated: 2024/11/05 17:30:48 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_conditions(size_t len)
{
	if (len == 0)
	{
		return (0);
	}
	return (1);
}

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

	dest = (char *)dst;
	source = (const char *)src;
	if ((dest == NULL) || (source == NULL))
		return (NULL);
	if (check_conditions(len) == 0)
		return (dst);
	if (dest > source)
	{
		overlap(dest, source, len);
	}
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
