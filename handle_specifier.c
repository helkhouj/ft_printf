/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 21:31:07 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/24 21:31:26 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifier(const char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += handle_char(args);
	else if (specifier == 's')
		count += handle_string(args);
	else if (specifier == 'd' || specifier == 'i')
		count += handle_integer(args);
	else if (specifier == 'u')
		count += handle_unsigned(args);
	else if (specifier == 'x')
		count += handle_hex(args, 0);
	else if (specifier == 'X')
		count += handle_hex(args, 1);
	else if (specifier == 'p')
		count += handle_pointer(args);
	else if (specifier == '%')
		count += ft_putchar('%');
	else
	{
		count += ft_putchar('%');
		count += ft_putchar(specifier);
	}
	return (count);
}
