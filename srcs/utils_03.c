/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olydden <olydden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:19:03 by ctobias           #+#    #+#             */
/*   Updated: 2020/11/14 00:32:53 by olydden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void				get_ray_delta(t_ray *ray)
{
	if (ray->dir.y == 0)
		ray->delta.x = 0;
	else if (ray->dir.x == 0)
		ray->delta.x = 1;
	else
		ray->delta.x = fabs(1 / ray->dir.x);
	if (ray->dir.x == 0)
		ray->delta.y = 0;
	else if (ray->dir.y == 0)
		ray->delta.y = 1;
	else
		ray->delta.y = fabs(1 / ray->dir.y);
}

void				skip_n(char **line, int fd)
{
	if (ft_strlen(*line) == 0)
	{
		ft_free(*line);
		while (get_next_line(fd, line) > 0 && ft_strlen(*line) == 0)
			ft_free(*line);
	}
}
