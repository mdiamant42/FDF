/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:07:06 by mdiamant          #+#    #+#             */
/*   Updated: 2023/06/27 11:07:07 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <string.h>

char	*get_next_line(int fd);

char	*reader(char *buffer, int fd);

int		ft_strlen(char *s);

int		ft_strchr2(char *s, char c);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_cl(char **buffer);

char	*ft_strndup(char *s, int len);

char	*soloq_lp_farmer(char **buffer);

#endif
