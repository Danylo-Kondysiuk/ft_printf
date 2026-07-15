/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:34:53 by dkondysi          #+#    #+#             */
/*   Updated: 2026/02/28 14:58:13 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ftpf_ptr_len(uintptr_t value)
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

static void	ftpf_put_ptr(uintptr_t value)
{
	if (value >= 16)
	{
		ftpf_put_ptr(value / 16);
		ftpf_put_ptr(value % 16);
		return ;
	}
	if (value <= 9)
		ft_putchar_fd((char)(value + '0'), 1);
	else
		ft_putchar_fd((char)(value - 10 + 'a'), 1);
}

int	ftpf_print_ptr(void *address)
{
	int			written;
	uintptr_t	value;

	value = (uintptr_t)address;
	if (value == 0)
		return ((int)write(1, "(nil)", 5));
	written = (int)write(1, "0x", 2);
	ftpf_put_ptr(value);
	return (written + ftpf_ptr_len(value));
}
