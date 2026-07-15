/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:39 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 16:37:49 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;
	size_t			i;

	s_1 = (unsigned char *)string1;
	s_2 = (unsigned char *)string2;
	i = 0;
	while (i < n)
	{
		if (s_1[i] != s_2[i] || !s_1[i] || !s_2[i])
			return (s_1[i] - s_2[i]);
		i++;
	}
	return (0);
}
