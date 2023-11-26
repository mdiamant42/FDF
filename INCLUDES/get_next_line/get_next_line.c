/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:07:23 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:07:24 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*nx;
	int		i;
	int		len;

	len = ft_strlen2(s2);
	if (!s1)
		return (ft_strndup(s2, len));
	len += ft_strlen2(s1);
	nx = malloc(len + 1);
	if (!nx)
		return (free(s1), (char *) NULL);
	i = 0;
	len = 0;
	while (s1[i])
		nx[len++] = s1[i++];
	i = 0;
	while (s2[i])
		nx[len++] = s2[i++];
	nx[len] = 0;
	free(s1);
	return (nx);
}

char	*ft_cl(char **buffer)
{
	char	*nx;
	char	*temp;
	int		i;

	if (!*buffer)
		return (NULL);
	i = 0;
	temp = *buffer;
	while (temp[i] && temp[i] != '\n')
		i++;
	if (temp[i] == '\n')
		i++;
	nx = ft_strndup(temp, i);
	*buffer = ft_strndup(temp + i, ft_strlen2(temp + i));
	free(temp);
	return (nx);
}

char	*soloq_lp_farmer(char **buffer)
{
	if (*buffer)
		free(*buffer);
	*buffer = NULL;
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*buffer = NULL;
	char		*str;
	int			rfl;

	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || fd < 0)
		return (soloq_lp_farmer(&buffer));
	if (ft_strchr2(buffer, '\n'))
		return (ft_cl(&buffer));
	str = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!str)
		return (NULL);
	rfl = 1;
	while (rfl > 0 && !ft_strchr2(buffer, '\n'))
	{
		rfl = read(fd, str, BUFFER_SIZE);
		str[rfl] = 0;
		buffer = ft_strjoin2(buffer, str);
	}
	soloq_lp_farmer(&str);
	return (ft_cl(&buffer));
}
