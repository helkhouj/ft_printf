/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:24:55 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/14 09:24:56 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(va_list args)
{
	char	*str;
	int		len;

	str = ft_itoa_base((unsigned long)va_arg(args, void *), 16, 0);
	len = ft_putstr("0x") + ft_putstr(str);
	free(str);
	return (len);
}
