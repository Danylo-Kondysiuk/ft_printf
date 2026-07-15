/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:06:03 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 23:17:17 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This code checks if the value is an alphabatic letter or not. 
	If the value is the alpabatic letter: it will return 1, otherwise 0
*/

int	ft_isascii(int dan)
{
	if (dan >= 0 && dan <= 127)
	{
		return (1);
	}
	return (0);
}
