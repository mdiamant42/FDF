/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:05:01 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:05:03 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlist	*ft_lstmap(t_tlist *lst, void *(*f)(void *), void (*del)(void *))
{
	t_tlist	*new;
	t_tlist	*lstf;

	if (!lst)
		return (0);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (NULL);
	lstf = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (!new->content)
		{
			ft_lstclear(&lstf, (*del));
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	return (lstf);
}
