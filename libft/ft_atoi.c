/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:16:20 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/07 15:39:23 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	outcome;
	int	i;
	int	signchange;

	signchange = 1;
	i = 0;
	outcome = 0;
	while (s[i] == '\t' || s[i] == '\v' || s[i] == '\f'
		|| s[i] == '\n' || s[i] == ' ' || s[i] == '\r')
	{
		i++;
	}
	if (s[i] == '-')
	{
		signchange = signchange * -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		outcome = ((s[i] - '0') + (outcome * 10));
		i++;
	}
	return (outcome * signchange);
}
