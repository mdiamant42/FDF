/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:03:32 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:03:33 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*sdest;
	size_t	i;

	i = ft_strlen(s);
	sdest = malloc((i + 1) * sizeof(char));
	if (!sdest)
		return (0);
	i = -1;
	while (s[++i])
		sdest[i] = (*f)((unsigned int) i, s[i]);
	sdest[i] = 0;
	return (sdest);
}
