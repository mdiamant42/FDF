/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:06:00 by mdiamant          #+#    #+#             */
/*   Updated: 2023/07/03 09:50:08 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
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
	if (nb > 2147483647 && is_neg == 1)
		exit(EXIT_FAILURE);
	if (nb > 2147483648 && is_neg == -1)
		exit(EXIT_FAILURE);
	nb = nb * is_neg;
	return ((int)(nb));
}
/*nb * 10 + stri  = le resultat en table ascci si - 48
on retombe sur le chiffre demandé.*/
