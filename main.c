#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *p;
	int	d = -198;
	printf("\n%d\n", ft_printf( "%s", NULL));
	printf("\n%d\n", printf("%s", NULL));
	return (0);
}
