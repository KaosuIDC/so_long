/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:59:48 by sudelory          #+#    #+#             */
/*   Updated: 2024/11/29 17:30:58 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((SIZE_MAX / nmemb) < size)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, nmemb * size);
	return (temp);
}
