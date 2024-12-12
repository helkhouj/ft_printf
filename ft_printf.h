#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

int ft_printf(const char *format, ...);
int ft_putchar_fd(char c, int fd);
int ft_putstr_fd(char *s, int fd);
char *ft_itoa_base(unsigned long num, int base, int uppercase);

#endif
