#include "ft_printf.h"

int handle_string(va_list args)
{
    char *str = va_arg(args, char *);
    if (!str)
        return (ft_putstr("(null)"));
    return (ft_putstr(str));
}