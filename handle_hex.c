/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:25:04 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/24 16:56:50 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_hex(va_list args, int uppercase)
{
    unsigned int num = va_arg(args, unsigned int);
    return (ft_itoa_base(num, 16, uppercase));
}

