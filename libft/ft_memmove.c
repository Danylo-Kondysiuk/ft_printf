/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:55:01 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 22:34:50 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dest);
}
