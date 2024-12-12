#include "ft_printf.h"

int handle_pointer(va_list args)
{
    char *str = ft_itoa_base((unsigned long)va_arg(args, void *), 16, 0);
    int len = ft_putstr_fd("0x", 1) + ft_putstr_fd(str, 1);
    free(str);
    return (len);
}