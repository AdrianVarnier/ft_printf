#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("\n%d\n", printf("|%s|", NULL));
	printf("\n%d\n", printf("|%s|", ""));
	printf("\n%d\n", printf("|%s|", "la fonction marche"));
	printf("\n%d\n", printf("|%.13s|", "precision < s ko"));
	printf("\n%d\n", printf("|%.100s|", "precision > s"));
	printf("\n%d\n", printf("|%.0s|", "precision = 0"));
	printf("\n%d\n", printf("|%15s|", "+width"));
	printf("\n%d\n", printf("|%-15s|", "-width"));
	printf("\n%d\n", printf("|%.*s|", 14, "precision* < s ko"));
	printf("\n%d\n", printf("|%.*s|", 100, "precision* > s"));
	printf("\n%d\n", printf("|%.*s|", 0, "precision* = 0"));
	printf("\n%d\n", printf("|%*s|", 15, "+width*"));
	printf("\n%d\n", printf("|%*s|", -15, "-width*"));
	printf("\n%d\n", printf("|%*s|", 0, "width* = 0"));
	printf("\n%d\n", printf("|%24.100s|", "+width & precision > s"));
	printf("\n%d\n", printf("|%26.22s|", "+width & precision < s ko"));
	printf("\n%d\n", printf("|%-24.100s|", "-width < precision"));
	printf("\n%d\n", printf("|%-26.18s|", "-width > precision ko"));
	printf("\n%d\n", printf("|%-*.*s|", 24, 100, "-width < precision"));
	printf("\n%d\n", printf("|%-*.*s|", 26, 18, "-width > precision ko"));
	
	printf("\n%d\n", printf("|%c|", '\0'));
	printf("\n%d\n", printf("|%c|", '\n'));
	printf("\n%d\n", printf("|%23c|", 'k'));
	printf("\n%d\n", printf("|%-11c|", 'k'));
	
	printf("\n%d\n", printf("|%d|", 652));
	printf("\n%d\n", printf("|%d|", 2147483647));
	printf("\n%d\n", printf("|%d|", -2147483648));
	printf("\n%d\n", printf("|%.10d|", 652));
	printf("\n%d\n", printf("|%.10d|", -652));
	printf("\n%d\n", printf("|%-26d|", 652));
	printf("\n%d\n", printf("|%26d|", 652));
	printf("\n%d\n", printf("|%26.10d|", 652));
	printf("\n%d\n", printf("|%-26.10d|", 652));
	printf("\n%d\n", printf("|%9.16d|", 652));
	printf("\n%d\n", printf("|%-9.16d|", 652));

	return (0);
}
