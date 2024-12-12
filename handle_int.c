#include "ft_printf.h"

int handle_integer(va_list args)
{
    char *str = ft_itoa(va_arg(args, int));
    int len = ft_putstr_fd(str, 1);
    free(str);
    return (len);
}