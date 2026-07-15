/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:54:52 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 22:41:09 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int cons_byte, size_t n_bytesof_memory)
{
	char	*string;
	size_t	index;

	index = 0;
	string = (char *)pointer;
	while (index < n_bytesof_memory)
	{
		string[index] = cons_byte;
		index++;
	}
	return (pointer);
}
