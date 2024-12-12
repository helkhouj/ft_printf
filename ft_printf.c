#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int i = 0;

    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
            count += process_format(format, args, &i);
        else
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (count);
}