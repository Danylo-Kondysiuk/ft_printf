/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:32:40 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/13 20:12:24 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This code checks if the value is an alphabatic letter or not. 
	If the value is the alpabatic letter: it will return 1, otherwise 0
*/

int	ft_isalpha(int dan)
{
	if ((dan >= 'A' && dan <= 'Z') || (dan >= 'a' && dan <= 'z'))
	{
		return (1);
	}
	return (0);
}
