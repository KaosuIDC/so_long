/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:50:57 by sudelory          #+#    #+#             */
/*   Updated: 2025/04/25 17:08:52 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../include/so_long.h>

void	check_elements(const char *map_name, t_map *map)
{
	int	fd;
	int	i;

	fd = open(map_name);
	i = 0;
	if (fd < 0)
	{
		exit (1);
	}

}