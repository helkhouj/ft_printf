#include "ft_printf.h"
#include "stdio.h"


int main(void)
{
	int i = 5;
	printf("%p\n", &i);
	ft_printf("%p\n", &i);
	return (0);

}

