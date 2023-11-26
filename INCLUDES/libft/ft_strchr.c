/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:04:01 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:04:01 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (!c)
		return (((char *)s) + ft_strlen(s));
	while (((char *)s)[++i])
		if (((char *)s)[i] == (char) c)
			return (((char *)s) + i);
	return (NULL);
}
	/*si c
	 = NULL alors renvoyer un pointeur sur '\0'*/
