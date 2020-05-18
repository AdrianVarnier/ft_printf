#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *p;
	printf("%d\n", printf("-->|%-16p|<--\n", p));
	printf("%d\n", ft_printf("-->|%-16p|<--\n", p));
	return (0);
}
