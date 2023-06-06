/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:36:37 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:19:38 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, int n)
{
	int		i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	if (src == dest)
		return (0);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
