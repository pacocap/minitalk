/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 18:10:22 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:19:06 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *src, int c, int n)
{
	int				i;
	unsigned char	*src2;

	i = 0;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		if (src2[i] == (unsigned char)c)
			return (&src2[i]);
		i++;
	}
	return (0);
}
