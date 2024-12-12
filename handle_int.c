#include "ft_printf.h"

handle_integer(va_list args)
{
    char *str = ft_itoa(va_arg(args, int));
    int len = ft_putstr(str);
    free(str);
    return (len);
}