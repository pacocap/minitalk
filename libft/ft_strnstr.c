/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:24:06 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/15 14:24:25 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	else
	{
		while (j < len)
		{
			while (big[j + i] == little[i] && (j + i) < len)
			{
				i++;
				if (little[i] == '\0')
				{
					return (&big[j]);
				}
			}
			i = 0;
			j++;
		}
		return ((char *)0);
	}
}
