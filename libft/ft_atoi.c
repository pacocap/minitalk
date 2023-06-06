/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:00:52 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:03:52 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		sign;
	long	num;

	num = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\f' ||
			*str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (num * sign < -2147483648)
			return (0);
		if (num * sign > 2147483647)
			return (-1);
		num = (*str - 48) + num * 10;
		str++;
	}
	return (sign * num);
}
