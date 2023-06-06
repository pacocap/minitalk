/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:03:53 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/16 18:34:44 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*str;

	if (!lst)
		return ;
	while (*lst)
	{
		str = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = str;
	}
}
