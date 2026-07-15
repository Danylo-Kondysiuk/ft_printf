/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:16:16 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/07 15:42:27 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 The ft_bzero make 'n' bytes of 
 the memory area pointed to by 'pointer' to zero.
*/

void	ft_bzero(void *pointer, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)pointer;
	i = 0;
	while (n--)
	{
		p[i] = 0;
		i++;
	}
}
