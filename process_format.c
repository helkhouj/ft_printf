#include "ft_printf.h"

int process_format(const char *format, va_list args, int *i)
{
    int count = 0;

    (*i)++;
    if (format[*i] == 'c')
        count += handle_char(args);
    else if (format[*i] == 's')
        count += handle_string(args);
    else if (format[*i] == 'd' || format[*i] == 'i')
        count += handle_integer(args);
    else if (format[*i] == 'u')
        count += handle_unsigned(args);
    else if (format[*i] == 'x')
        count += handle_hex(args, 0);
    else if (format[*i] == 'X')
        count += handle_hex(args, 1);
    else if (format[*i] == 'p')
        count += handle_pointer(args);
    else if (format[*i] == '%')
        count += ft_putchar('%');

    return count;
}