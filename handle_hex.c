/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:25:04 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/14 09:25:05 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_hex(va_list args, int uppercase)
{
    char *str = ft_itoa_base(va_arg(args, unsigned int), 16, uppercase);
    int len = ft_putstr(str);
    free(str);
    return (len);
}
