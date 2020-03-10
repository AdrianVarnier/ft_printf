#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *p;
	printf("\n%d", ft_printf("%p", p));
	printf("\n%d", printf("%p", p));
	return (0);
}
