/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:21:05 by dkondysi          #+#    #+#             */
/*   Updated: 2026/02/27 16:48:54 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ftpf_dispatch(va_list arg_list, char spec)
{
	if (spec == 'c')
		return (ftpf_print_char(va_arg(arg_list, int)));
	if (spec == 's')
		return (ftpf_print_str(va_arg(arg_list, char *)));
	if (spec == 'p')
		return (ftpf_print_ptr(va_arg(arg_list, void *)));
	if (spec == 'd' || spec == 'i')
		return (ftpf_print_int(va_arg(arg_list, int)));
	if (spec == 'u')
		return (ftpf_print_uint(va_arg(arg_list, unsigned int)));
	if (spec == 'x' || spec == 'X')
		return (ftpf_print_hex(va_arg(arg_list, unsigned int), spec));
	if (spec == '%')
		return (ftpf_print_percent());
	return (0);
}

static int	ftpf_handle_percent(const char *format, size_t *pos, va_list args)
{
	int	written;

	written = ftpf_dispatch(args, format[*pos + 1]);
	(*pos)++;
	if (format[*pos] != '\0')
		(*pos)++;
	return (written);
}

int	ft_printf(const char *format, ...)
{
	size_t	pos;
	va_list	args;
	int		total_written;

	pos = 0;
	total_written = 0;
	va_start(args, format);
	while (format[pos] != '\0')
	{
		if (format[pos] == '%')
		{
			total_written += ftpf_handle_percent(format, &pos, args);
			continue ;
		}
		total_written += ftpf_print_char((unsigned char)format[pos]);
		pos++;
	}
	va_end(args);
	return (total_written);
}
