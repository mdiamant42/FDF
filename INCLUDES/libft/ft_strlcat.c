/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:03:42 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:03:42 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (size < 1)
		return (lensrc);
	lendst = ft_strlen(dst);
	if (size < lendst)
		return (lensrc + size);
	i = lendst;
	j = 0;
	while (src[j] && i < size -1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = 0;
	return (lendst + lensrc);
}
