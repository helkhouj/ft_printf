#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_ret, std_ret;

    // Test %c
    ft_ret = ft_printf("Custom: %c\n", 'A');
    std_ret = printf("Standard: %c\n", 'A');
    printf("Return Values - ft_printf: %d, printf: %d\n\n", ft_ret, std_ret);

    // Test %s
    ft_ret = ft_printf("Custom: %s\n", "Hello, World!");
    std_ret = printf("Standard: %s\n", "Hello, World!");
    printf("Return Values - ft_printf: %d, printf: %d\n\n", ft_ret, std_ret);

    // Test %d and %i
    ft_ret = ft_printf("Custom: %d and %i\n", -42, 42);
    std_ret = printf("Standard: %d and %i\n", -42, 42);
    printf("Return Values - ft_printf: %d, printf: %d\n\n", ft_ret, std_ret);

    // Test %u
    ft_ret = ft_printf("Custom: %u\n", 4294967295U);
    std_ret = printf("Standard: %u\n", 4294967295U);
    printf("Return Values - ft_printf: %d, printf: %d\n\n", ft_ret, std_ret);

    // Test %x and %X
    ft_ret = ft_printf("Custom: %x and %X\n", 255, 255);
    std_ret = printf("Standard: %x and %X\n", 255, 255);
    printf("Return Values - ft_printf: %d, printf: %d\n\n", ft_ret, std_ret);

    // Test %p
    int x = 42;
    ft_ret = ft_printf("Custom: %p\n", &x);
    std_ret = printf("Standard: %p\n", &x);
    printf("Return Values - ft_printf: %d, printf: %d\n\n", ft_ret, std_ret);

    // Test %%
    ft_ret = ft_printf("Custom: %%\n");
    std_ret = printf("Standard: %%\n");
    printf("Return Values - ft_printf: %d, printf: %d\n\n", ft_ret, std_ret);

    return 0;
}
