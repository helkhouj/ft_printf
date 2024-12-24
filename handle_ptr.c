/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:24:55 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/24 16:44:49 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_pointer(va_list args)
{
    unsigned long num = (unsigned long)va_arg(args, void *);
    int len = ft_putstr("0x");
    len += ft_itoa_base(num, 16, 0);
    return len;
}
