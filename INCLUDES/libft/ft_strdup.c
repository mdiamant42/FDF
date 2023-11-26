/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:03:59 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:04:00 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;
	int		i;

	i = ft_strlen(s);
	array = malloc((i + 1) * sizeof(char));
	i = -1;
	if (array)
	{
		while (s[++i])
			array[i] = s[i];
		array[i] = 0;
	}
	return (array);
}
