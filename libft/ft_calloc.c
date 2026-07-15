/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:16:08 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/09 01:17:43 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t array, size_t size)
{
	void	*mem;
	size_t	msize;

	if (array != 0 && size > SIZE_MAX / array)
		return (NULL);
	msize = array * size;
	mem = malloc(msize);
	if (!mem)
		return (NULL);
	ft_bzero(mem, msize);
	return (mem);
}
