/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:36:14 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/17 22:29:14 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_start(int end, const char *s1, const char *set)
{
	int i;
	int start;

	start = 0;
	i = 0;
	while (set[i])
	{
		if (s1[start] == set[i])
		{
			start++;
			i = -1;
		}
		if (s1[end] == set[i])
		{
			end--;
			i = -1;
		}
		i++;
	}
	return (start);
}

static int	set_end(int end, const char *s1, const char *set)
{
	int i;
	int start;

	start = 0;
	i = 0;
	while (set[i])
	{
		if (s1[start] == set[i])
		{
			start++;
			i = -1;
		}
		if (s1[end] == set[i])
		{
			end--;
			i = -1;
		}
		i++;
	}
	return (end);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = set_start(end, s1, set);
	end = set_end(end, s1, set);
	if (start > end)
		end = start;
	if (!(res = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	i = 0;
	start--;
	while (start++ < end)
	{
		res[i] = s1[start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
