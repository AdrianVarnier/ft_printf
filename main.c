#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *p;
	printf("\n%d\n", ft_printf("%p", p));
	printf("\n%d\n", printf("%p", p));
	return (0);
}
