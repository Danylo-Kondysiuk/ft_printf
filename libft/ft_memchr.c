/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:56:07 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 23:45:20 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch2;

	s = (unsigned char *)str;
	ch2 = (unsigned char)c;
	while (n--)
	{
		if (*s == ch2)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
