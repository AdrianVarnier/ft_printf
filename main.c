#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("\n%d\n", ft_printf( "%s", NULL));
	printf("\n%d\n", printf("%s", NULL));
	printf("\n%d\n", ft_printf( "%s", ""));
	printf("\n%d\n", printf("%s", ""));
	printf("\n%d\n", ft_printf( "%s", "la fonction marche"));
	printf("\n%d\n", printf("%s", "la fonction marche"));
	printf("\n%d\n", ft_printf( "%.18s", "la fonction marche pas"));
	printf("\n%d\n", printf("%.18s", "la fonction marche pas"));
	return (0);
}
