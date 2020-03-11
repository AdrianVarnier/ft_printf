#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *p;
	printf("\n%d\n", ft_printf("|%*.3d|", -7, 1));
	printf("\n%d\n", printf("|%*.3d|", -7, 1));
	return (0);
}
