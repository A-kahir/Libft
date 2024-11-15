/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <aymanekahir036@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:20:13 by akahir            #+#    #+#             */
/*   Updated: 2024/11/15 16:27:55 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *check_strings(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		return (ft_strdup(s2));
	}
	if (s2 == NULL)
	{
		return (ft_strdup(s1));
	}
	return (0);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (check_strings(s1, s2));
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
