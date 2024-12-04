/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:18:30 by akahir            #+#    #+#             */
/*   Updated: 2024/11/16 11:35:11 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	alloc_size;

	if (s == NULL)
		return (NULL);
	if (s == NULL || start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	alloc_size = ft_strlen(s) - start;
	if (alloc_size > len)
	{
		alloc_size = len;
	}
	ptr = malloc((alloc_size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ptr, &s[start], alloc_size);
	ptr[alloc_size] = '\0';
	return (ptr);
}
