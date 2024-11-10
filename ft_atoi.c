/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:00:07 by akahir            #+#    #+#             */
/*   Updated: 2024/11/05 12:20:11 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	over_flow(unsigned long result, int signe)
{
	if (result >= 9223372036854775807 && signe == 1)
		return (-1);
	if ((result > 9223372036854775807) && (signe == -1))
		return (0);
	return (3);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					signe;
	unsigned long		result;

	signe = 1;
	i = 0;
	result = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			signe = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = ((result * 10) + (str[i] - '0'));
		if (over_flow(result, signe) != 3)
			return (over_flow(result, signe));
		i++;
	}
	return (result * signe);
}
