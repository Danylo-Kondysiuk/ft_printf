/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:26 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 15:19:23 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	z;

	z = ft_strlen(s);
	while (z >= 0)
	{
		if (s[z] == (char)c)
			return ((char *)s + z);
		z--;
	}
	return (NULL);
}
