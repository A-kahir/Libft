/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:52:55 by akahir            #+#    #+#             */
/*   Updated: 2024/11/16 10:23:21 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)(&s[len]));
		}
		len--;
	}
	return (NULL);
}
