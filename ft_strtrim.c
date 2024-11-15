/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <aymanekahir036@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:56:19 by akahir            #+#    #+#             */
/*   Updated: 2024/11/15 16:28:56 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	start_str(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0' && s1[i] != set[k])
			k++;
		if (set[k] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}

static	int	end_str(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = ft_strlen(s1);
	while (i > 0)
	{
		i--;
		k = 0;
		while (set[k] != '\0' && s1[i] != set[k])
			k++;
		if (set[k] == '\0')
		{
			return (i + 1);
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (set == NULL)
	{
		return (ft_strdup(s1));
	}
	start = start_str(s1, set);
	end = end_str(s1, set);
	if (start >= end)
	{
		return (ft_strdup(""));
	}
	p = ft_substr(s1, start, (end - start));
	return (p);
}
