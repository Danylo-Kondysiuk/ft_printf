/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:20:38 by dkondysi          #+#    #+#             */
/*   Updated: 2026/02/07 20:50:06 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ftpf_uint_len(unsigned int value)
{
	int	len;

	len = 0;
	while (value != 0)
	{
		len++;
		value /= 10;
	}
	return (len);
}

static char	*ftpf_uitoa(unsigned int value)
{
	char	*buf;
	int		len;

	len = ftpf_uint_len(value);
	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (buf == NULL)
		return (NULL);
	buf[len] = '\0';
	while (value != 0)
	{
		buf[len - 1] = (char)(value % 10 + '0');
		value /= 10;
		len--;
	}
	return (buf);
}

int	ftpf_print_uint(unsigned int value)
{
	char	*digits;
	int		written;

	if (value == 0)
		return ((int)write(1, "0", 1));
	digits = ftpf_uitoa(value);
	if (digits == NULL)
		return (0);
	written = ftpf_print_str(digits);
	free(digits);
	return (written);
}
