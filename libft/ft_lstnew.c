/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 12:52:37 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/16 13:19:24 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *a;

	if (!(a = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	a->content = content;
	a->next = NULL;
	return (a);
}
