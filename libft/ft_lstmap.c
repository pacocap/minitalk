/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:29:59 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/16 19:55:22 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_el;
	t_list	*newlist;

	if (!lst)
		return (NULL);
	first_el = NULL;
	while (lst)
	{
		newlist = ft_lstnew(f(lst->content));
		if (!newlist)
		{
			ft_lstclear(&first_el, del);
			return (NULL);
		}
		ft_lstadd_front(&first_el, newlist);
		lst = lst->next;
	}
	return (first_el);
}
