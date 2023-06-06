/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:20:14 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:25:49 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
