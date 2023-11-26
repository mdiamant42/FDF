/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:08:47 by mdiamant          #+#    #+#             */
/*   Updated: 2023/07/03 09:54:15 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	read_map(t_game *g, int fd, t_read_map *rm)
{
	read_map_init(fd, rm);
	while (rm->line)
	{
		while (rm->line[rm->i])
		{
			if (in_str(rm->line[rm->i], ','))
				read_map_suite(g, rm);
			else
			{
				g->point[rm->idx]->z = ft_atoi_fdf(rm->line[rm->i]);
				g->point[rm->idx]->color = 0xFFFFFF;
			}
			g->point[rm->idx]->h = rm->i++;
			g->point[rm->idx]->l = rm->j;
			g->point[rm->idx]->x = g->point[rm->idx]->h;
			g->point[rm->idx]->y = g->point[rm->idx]->l;
			rm->idx++;
		}
		rm->j++;
		ft_free_gnl(rm->line);
		read_map_init(fd, rm);
	}
	free(rm);
}

void	read_map_init(int fd, t_read_map *rm)
{
	rm->i = 0;
	rm->max_width = 0;
	rm->line2 = get_next_line(fd);
	rm->line = ft_split(rm->line2, ' ');
	rm->tokens = NULL;
	free(rm->line2);
}

int	ft_atohex(char *str, char *basemin, char *basemaj)
{
	int	i;
	int	j;
	int	n;

	i = 2;
	n = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] && (str[i] != basemin[j] && str[i] != basemaj[j]))
			j++;
		n = n * 16 + j;
		i++;
		if (str[i] == '\n')
			break ;
	}
	return (n);
}

void	read_map_suite(t_game *g, t_read_map *rm)
{
	rm->tokens = ft_split(rm->line[rm->i], ',');
	g->point[rm->idx]->z = ft_atoi_fdf(rm->tokens[0]);
	g->point[rm->idx]->color = ft_atohex(rm->tokens[1], BMIN, BMAJ);
	g->in_color = 1;
	free(rm->tokens[0]);
	free(rm->tokens[1]);
	free(rm->tokens);
}

int	ft_atoi_fdf(const char *str)
{
	long int	nb;
	int			i;
	long int	is_neg;

	nb = 0;
	i = 0;
	is_neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			is_neg = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - 48;
	if (nb > 1000 && is_neg == 1)
		exit(EXIT_FAILURE);
	if (nb > 1000 && is_neg == -1)
		exit(EXIT_FAILURE);
	nb = nb * is_neg;
	return ((int)(nb));
}
