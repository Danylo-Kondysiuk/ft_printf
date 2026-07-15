/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:51:20 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 16:52:16 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	di;
	size_t	si;
	size_t	dlen;
	size_t	slen;

	if (dest == NULL && size == 0)
		return (0);
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	di = dlen;
	si = 0;
	if (size <= dlen)
		return (slen + size);
	while (di + 1 < size && src[si] != '\0')
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (slen + dlen);
}
