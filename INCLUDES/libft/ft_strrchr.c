/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:03:24 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:03:24 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pts;

	i = -1;
	pts = 0;
	if (!c)
		return (((char *)s) + ft_strlen(s));
	while (((char *)s)[++i])
	{
		if (((char *)s)[i] == (char) c)
		{
			pts = ((char *)s) + i;
		}
	}
	return (pts);
}
	/*si c = NULL alors renvoyer un pointeur sur '\0'*/
