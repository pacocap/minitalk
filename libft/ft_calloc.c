/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 13:53:18 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:07:30 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nmemb, int size)
{
	void	*res;
	int		i;

	i = 0;
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)res)[i] = '\0';
		i++;
	}
	return (res);
}
