/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:57:39 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 17:00:20 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_sizeofword(int z)
{
	unsigned int	size;

	size = 0;
	if (z <= 0)
		size++;
	while (z != 0)
	{
		z /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	char			*string;
	unsigned int	number;

	length = ft_sizeofword(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (!string)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number > 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (string);
}
