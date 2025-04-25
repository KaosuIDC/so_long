/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:59:09 by sudelory          #+#    #+#             */
/*   Updated: 2024/11/15 16:24:39 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*point;
	unsigned char		to_find;

	i = 0;
	point = (const unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (point[i] == to_find)
			return ((void *)&point[i]);
		i++;
	}
	return (0);
}
