/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:21:12 by dkondysi          #+#    #+#             */
/*   Updated: 2026/02/27 16:48:54 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ftpf_print_char(int ch);
int	ftpf_print_str(char *text);
int	ftpf_print_int(int value);
int	ftpf_print_uint(unsigned int value);
int	ftpf_print_hex(unsigned int value, char spec);
int	ftpf_print_ptr(void *address);
int	ftpf_print_percent(void);

#endif