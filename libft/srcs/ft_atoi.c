/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olydden <olydden@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 19:40:25 by olydden           #+#    #+#             */
/*   Updated: 2020/10/29 23:44:15 by olydden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr, int *i)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (nptr[*i] == ' ' || nptr[*i] == '\t'
			|| nptr[*i] == '\n' || nptr[*i] == '\r' || nptr[*i] == '\v'
			|| nptr[*i] == '\f')
		(*i)++;
	if (nptr[*i] == '-' || nptr[*i] == '+')
	{
		if (nptr[*i] == '-')
		{
			sign = -1;
			(*i)++;
		}
	}
	while (nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		num = num * 10 + (nptr[*i] - '0');
		(*i)++;
	}
	(*i)--;
	return (num * sign);
}
