#include "ft_printf.h"

int handle_unsigned(va_list args)
{
    char *str = ft_itoa_base(va_arg(args, unsigned int), 10, 0);
    int len = ft_putstr(str);
    free(str);
    return (len);
}