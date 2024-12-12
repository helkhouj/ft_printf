#include "ft_printf.h"

int handle_hex(va_list args, int uppercase)
{
    char *str = ft_itoa_base(va_arg(args, unsigned int), 16, uppercase);
    int len = ft_putstr(str);
    free(str);
    return (len);
}