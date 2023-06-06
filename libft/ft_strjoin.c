/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 12:49:30 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:25:19 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		len_malloc;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_malloc = (ft_strlen(s1) + ft_strlen(s2));
	if (!(res = (char *)malloc(sizeof(char) * len_malloc + 1)))
		return (NULL);
	while (*s1)
	{
		res[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		res[i] = *s2;
		i++;
		s2++;
	}
	res[i] = '\0';
	return (res);
}
