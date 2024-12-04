/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:00:07 by akahir            #+#    #+#             */
/*   Updated: 2024/11/16 09:47:41 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	over_flow(int signe)
{
	if (signe == 1)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(const char *str)
{
	int					i;
	int					signe;
	unsigned long long	result;
	unsigned long long	max;

	signe = 1;
	i = 0;
	result = 0;
	max = 9223372036854775807;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (max - (str[i] - '0')) / 10)
			return (over_flow(signe));
		result = ((result * 10) + (str[i] - '0'));
		i++;
	}
	return (result * signe);
}
