/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:06:09 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/15 17:42:34 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This code checks if the value is an alphabatic letter or not. 
	If the value is the alpabatic letter: it will return 1, otherwise 0
*/

int	ft_isalnum(int dan)
{
	if ((dan >= '0' && dan <= '9')
		|| (dan >= 'A' && dan <= 'Z')
		|| (dan >= 'a' && dan <= 'z'))
	{
		return (1);
	}
	return (0);
}
