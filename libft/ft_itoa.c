/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:38:21 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/15 14:04:50 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = num * -1;
		len++;
	}
	while (num > 0)
	{
		{
			num = num / 10;
			len++;
		}
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		len;
	int		i;

	len = ft_length(n);
	i = len;
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	len--;
	if ((num = n) == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		res[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	res[i] = '\0';
	return (res);
}
