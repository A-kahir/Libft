/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:43:42 by akahir            #+#    #+#             */
/*   Updated: 2024/11/05 17:30:11 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len_s;
	char	*result;

	len_s = 0;
	while (s == NULL || f == NULL)
	{
		return (NULL);
	}
	while (s[len_s] != '\0')
	{
		len_s++;
	}
	result = (char *)malloc((len_s + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len_s] = '\0';
	return (result);
}
