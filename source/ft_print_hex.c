/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:20:27 by dkondysi          #+#    #+#             */
/*   Updated: 2026/02/07 20:50:31 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ftpf_hex_len(unsigned int value)
{
	int	len;

	len = 0;
	while (value != 0)
	{
		len++;
		value /= 16;
	}
	return (len);
}

static void	ftpf_put_hex(unsigned int value, char spec)
{
	if (value >= 16)
	{
		ftpf_put_hex(value / 16, spec);
		ftpf_put_hex(value % 16, spec);
		return ;
	}
	if (value <= 9)
		ft_putchar_fd((char)(value + '0'), 1);
	else if (spec == 'x')
		ft_putchar_fd((char)(value - 10 + 'a'), 1);
	else
		ft_putchar_fd((char)(value - 10 + 'A'), 1);
}

int	ftpf_print_hex(unsigned int value, char spec)
{
	if (value == 0)
		return ((int)write(1, "0", 1));
	ftpf_put_hex(value, spec);
	return (ftpf_hex_len(value));
}
