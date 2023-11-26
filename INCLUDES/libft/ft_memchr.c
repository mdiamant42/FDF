/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:04:52 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:04:52 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n --)
	{
		if (((unsigned char *)s)[i++] == ((unsigned char)c))
			return (((unsigned char *)s) + --i);
	}
	return (NULL);
}
/* --i pour retirer l'incrementation supplementaire*/
