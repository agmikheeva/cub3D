/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olydden <olydden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:03:09 by olydden           #+#    #+#             */
/*   Updated: 2020/08/09 00:40:11 by olydden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nb)
{
	size_t		i;

	i = 0;
	if (nb < 0)
		i++;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
