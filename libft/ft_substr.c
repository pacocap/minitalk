/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:09:57 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/15 14:42:17 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	i = 0;
	if (!s || ft_strlen(s) < start)
	{
		if (!(subs = (char *)malloc(sizeof(char))))
			return (NULL);
		*subs = '\0';
		return (subs);
	}
	if (!(subs = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		subs[i] = s[i + start];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
