#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *p;
	int	d = -198;
	printf("\n%d\n", ft_printf("-->|%-9.7i|<--\n", d));
	printf("\n%d\n", printf("-->|%-9.7i|<--\n", d));
	return (0);
}
