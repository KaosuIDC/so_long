/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:51:48 by sudelory          #+#    #+#             */
/*   Updated: 2025/04/25 17:45:45 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <../libft/libft.h>
# include <../minilibx-linux/mlx.h>
# include <stdbool.h>

typedef struct s_map
{
	int	nb_player;
	int	coins;
	int	exit;
	int	width;
	int	height;
}		t_map;

typedef struct s_game
{
	int	player_x;
	int	player_y;
	int	moves;
}		t_game;

# define KEY_ESC 65307
# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_DOWN 65364
# define KEY_RIGHT 65363

#endif