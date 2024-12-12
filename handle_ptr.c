#include "ft_printf.h"

int handle_pointer(va_list args)
{
    char *str = ft_itoa_base((unsigned long)va_arg(args, void *), 16, 0);
    int len = ft_putstr("0x") + ft_putstr(str);
    free(str);
    return (len);
}