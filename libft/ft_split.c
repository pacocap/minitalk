/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:37:24 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/15 14:41:09 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	count_numstr(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char			**res_array;
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;
	unsigned int	len;

	i = 0;
	end = -1;
	if (!s)
		return (0);
	len = count_numstr(s, c);
	if (!(res_array = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	while (i < len)
	{
		start = end + 1;
		while (s[++end] == c && end < ft_strlen(s))
			start++;
		while (s[end] != c && end < ft_strlen(s))
			end++;
		res_array[i] = ft_substr(s, start, end - start);
		i++;
	}
	res_array[i] = 0;
	return (res_array);
}
