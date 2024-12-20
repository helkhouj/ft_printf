/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:25:38 by helkhouj          #+#    #+#             */
/*   Updated: 2024/12/14 09:25:39 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calculate_length(unsigned long num, int base)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		num /= base;
		len++;
	}
	return (len);
}

static char	*build_base_string(int uppercase)
{
	if (uppercase)
		return ("0123456789ABCDEF");
	else
		return ("0123456789abcdef");
}

char	*ft_itoa_base(unsigned long num, int base, int uppercase)
{
	char	*digits;
	char	*result;
	int		len;

	digits = build_base_string(uppercase);
	if (num == 0)
		return (ft_strdup("0"));
	len = calculate_length(num, base);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (num > 0)
	{
		result[--len] = digits[num % base];
		num /= base;
	}
	return (result);
}
