/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:24:59 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/14 09:29:39 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_integer(va_list args)
{
    char *str = ft_itoa(va_arg(args, int));
    int len = ft_putstr(str);
    free(str);
    return (len);
}
