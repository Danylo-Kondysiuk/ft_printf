/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:06:01 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 23:49:03 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This code checks if the value is an alphabatic letter or not. 
	If the value is the alpabatic letter: it will return 1, otherwise 0
*/

int	ft_isdigit(int dan)
{
	if (dan >= '0' && dan <= '9')
	{
		return (1);
	}
	return (0);
}
