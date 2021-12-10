/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:44:41 by ael-beka          #+#    #+#             */
/*   Updated: 2021/12/06 17:44:53 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	long long			value;
	unsigned long long	count;
	int					i;

	i = 0;
	count = 0;
	sign = 1;
	value = 0;
	while ((str[i] == ' ' ) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		if (count++ >= 20 && sign == -1)
			return (0);
		if (count++ >= 20 && sign == 1)
			return (-1);
		i++;
	}
	return (value * sign);
}
