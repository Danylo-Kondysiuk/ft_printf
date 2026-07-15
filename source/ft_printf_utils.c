/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:20:49 by dkondysi          #+#    #+#             */
/*   Updated: 2026/02/07 20:35:47 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ftpf_print_char(int ch)
{
	write(1, &ch, 1);
	return (1);
}

static int	ftpf_write_cstr(char *text)
{
	int	idx;

	idx = 0;
	while (text[idx] != '\0')
	{
		write(1, &text[idx], 1);
		idx++;
	}
	return (idx);
}

int	ftpf_print_str(char *text)
{
	if (text == NULL)
		return (ftpf_write_cstr("(null)"));
	return (ftpf_write_cstr(text));
}

int	ftpf_print_int(int value)
{
	char	*digits;
	int		written;

	digits = ft_itoa(value);
	if (digits == NULL)
		return (0);
	written = ftpf_print_str(digits);
	free(digits);
	return (written);
}

int	ftpf_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
