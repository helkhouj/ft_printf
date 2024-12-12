#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_putchar(char c);
int ft_putstr(char *s);

int handle_char(va_list args);
int handle_string(va_list args);
int handle_pointer(va_list args);
int handle_hex(va_list args, int uppercase);
int handle_integer(va_list args);
int handle_unsigned(va_list args);


int ft_printf(const char *format, ...);


#endif
