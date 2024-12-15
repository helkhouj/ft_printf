/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:25:28 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/14 09:38:30 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);

int		handle_char(va_list args);
int		handle_string(va_list args);
int		handle_pointer(va_list args);
int		handle_hex(va_list args, int uppercase);
int		handle_integer(va_list args);
int		handle_unsigned(va_list args);

int		ft_printf(const char *format, ...);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
char	*ft_itoa_base(unsigned long num, int base, int uppercase);
int		process_format(const char *format, va_list args, int *i);

#endif
