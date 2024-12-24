/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:25:38 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/24 17:07:25 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa_base(unsigned long num, int base, int uppercase)
{
	char	*digits;
	char	buffer[65];
	int		i;

	i = 64;
	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	buffer[i--] = '\0';
	if (num == 0)
	{
		buffer[i] = '0';
		return (ft_putstr(&buffer[i]));
	}
	while (num > 0)
	{
		buffer[i--] = digits[num % base];
		num /= base;
	}
	return (ft_putstr(&buffer[i + 1]));
}
