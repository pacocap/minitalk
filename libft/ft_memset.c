/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:11:46 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:20:56 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int fill, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		((char *)ptr)[i] = fill;
		i++;
	}
	return (ptr);
}
