/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:00:17 by sudelory          #+#    #+#             */
/*   Updated: 2025/04/25 17:55:00 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../include/so_long.h>

bool	check_extension(const char *map_name)
{
	int		map_len;
	char	*exten;

	map_len = ft_strlen(map_name);
	exten = ".ber";
	if (ft_strncmp(map_name[map_len - 4], *exten, 4) == 0)
		return (true);
	return (false);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!check_extension(argv[1]))
			ft_putstr_fd("Error\nBad file extension\n", 2);
	}
	else
		ft_putstr_fd("Error\nWrong number of arguments\n", 2);
	return (0);
}
