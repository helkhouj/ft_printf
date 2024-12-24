/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:24:39 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/24 21:31:37 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_format(const char *format, va_list args, int *i)
{
	int	count;

	count = 0;
	(*i)++;
	count += handle_specifier(format[*i], args);
	return (count);
}
