#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("\n%d\n", ft_printf( "|%s|", NULL));
	printf("\n%d\n", printf("|%s|", NULL));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%s|", ""));
	printf("\n%d\n", printf("|%s|", ""));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%s|", "la fonction marche"));
	printf("\n%d\n", printf("|%s|", "la fonction marche"));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%.34s|", "la precision est plus petite que s ko"));
	printf("\n%d\n", printf("|%.34s|", "la precision est plus petite que s ko"));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%.100s|", "la precision est plus grande que s"));
	printf("\n%d\n", printf("|%.100s|", "la precision est plus grande que s"));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%.0s|", "la precision est egale a 0"));
	printf("\n%d\n", printf("|%.0s|", "la precision est egale a 0"));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%15s|", "+width"));
	printf("\n%d\n", printf("|%15s|", "+width"));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%-15s|", "-width"));
	printf("\n%d\n", printf("|%-15s|", "-width"));
	
	printf("\n");
	
	printf("\n%d\n", ft_printf( "|%0s|", "width est egale a 0"));
	printf("\n%d\n", printf("|%0s|", "width est egale a 0"));
	
	printf("\n");
	return (0);
}
