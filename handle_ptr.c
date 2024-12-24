/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:24:55 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/24 21:25:36 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(va_list args)
{
	unsigned long	num;
	int				len;

	num = (unsigned long)va_arg(args, void *);
	if (num == 0)
	{
		len = ft_putstr("(nil)");
	}
	else
	{
		len = ft_putstr("0x");
		len += ft_itoa_base(num, 16, 0);
	}
	return (len);
}
