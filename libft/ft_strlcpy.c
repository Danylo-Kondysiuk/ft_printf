/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:51:15 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 16:48:48 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (index + 1 < size && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	if (size > 0)
		dest[index] = '\0';
	while (src[index] != '\0')
		index++;
	return (index);
}
