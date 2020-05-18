#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *p;
	printf("%d\n", printf("-->|%-14p|<--\n", p));
	printf("%d\n", ft_printf("-->|%-14p|<--\n", p));
	return (0);
}
