/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:24:47 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/14 09:24:48 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_unsigned(va_list args)
{
    char *str = ft_itoa_base(va_arg(args, unsigned int), 10, 0);
    int len = ft_putstr(str);
    free(str);
    return (len);
}
