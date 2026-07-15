/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:31 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 23:56:23 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h;
	size_t	n;

	if (*little == '\0')
		return ((char *)big);
	h = 0;
	while (big[h] && h < len)
	{
		n = 0;
		while (little[n] && big[h + n] == little[n] && h + n < len)
			n++;
		if (little[n] == '\0')
			return ((char *)&big[h]);
		h++;
	}
	return (NULL);
}
