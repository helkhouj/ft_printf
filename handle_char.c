#include "ft_printf.h"

int handle_char(va_list args)
{
    return (ft_putchar_fd(va_arg(args, int), 1));
}
