/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:04:58 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:04:59 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlist	*ft_lstnew(void *content)
{
	t_tlist	*lst;

	lst = malloc(sizeof(t_tlist));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}
