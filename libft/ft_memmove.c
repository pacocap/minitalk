/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:24:44 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:20:15 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, int n)
{
	int		i;
	char	*dest2;
	char	*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	if (src == dest)
		return (dest);
	if (src < dest)
	{
		i = n - 1;
		while (i >= 0)
		{
			dest2[i] = src2[i];
			i--;
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			dest2[i] = src2[i];
	}
	return (dest);
}
