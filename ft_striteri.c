/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:33:24 by akahir            #+#    #+#             */
/*   Updated: 2024/11/05 17:30:25 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len_s;

	len_s = 0;
	while (s[len_s] != '\0')
	{
		len_s++;
	}
	i = 0;
	while (i < len_s)
	{
		f(i, &s[i]);
		i++;
	}
}
