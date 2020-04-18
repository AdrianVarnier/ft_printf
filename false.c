#include <stdio.h>
#include "ft_printf.h"

int main()
{
		ft_printf("\n%d\n", ft_printf("|%s|", NULL));
		ft_printf("\n%d\n", ft_printf("|%s|", ""));
		ft_printf("\n%d\n", ft_printf("|%s|", "la fonction marche"));
		ft_printf("\n%d\n", ft_printf("|%.13s|", "precision < s ko"));
		ft_printf("\n%d\n", ft_printf("|%.100s|", "precision > s"));
		ft_printf("\n%d\n", ft_printf("|%.0s|", "precision = 0"));
		ft_printf("\n%d\n", ft_printf("|%15s|", "+width"));
		ft_printf("\n%d\n", ft_printf("|%-15s|", "-width"));
		ft_printf("\n%d\n", ft_printf("|%.*s|", 14, "precision* < s ko"));
		ft_printf("\n%d\n", ft_printf("|%.*s|", 100, "precision* > s"));
		ft_printf("\n%d\n", ft_printf("|%.*s|", 0, "precision* = 0"));
		ft_printf("\n%d\n", ft_printf("|%*s|", 15, "+width*"));
		ft_printf("\n%d\n", ft_printf("|%*s|", -15, "-width*"));
		ft_printf("\n%d\n", ft_printf("|%*s|", 0, "width* = 0"));
		ft_printf("\n%d\n", ft_printf("|%24.100s|", "+width & precision > s"));
		ft_printf("\n%d\n", ft_printf("|%26.22s|", "+width & precision < s ko"));
		ft_printf("\n%d\n", ft_printf("|%-24.100s|", "-width < precision"));
		ft_printf("\n%d\n", ft_printf("|%-26.18s|", "-width > precision ko"));
		ft_printf("\n%d\n", ft_printf("|%-*.*s|", 24, 100, "-width < precision"));
		ft_printf("\n%d\n", ft_printf("|%-*.*s|", 26, 18, "-width > precision ko"));
		
		ft_printf("\n%d\n", ft_printf("|%c|", '\0'));
		ft_printf("\n%d\n", ft_printf("|%c|", '\n'));
		ft_printf("\n%d\n", ft_printf("|%23c|", 'k'));
		ft_printf("\n%d\n", ft_printf("|%-11c|", 'k'));
		
		ft_printf("\n%d\n", ft_printf("|%d|", 652));
		ft_printf("\n%d\n", ft_printf("|%d|", 2147483647));
		ft_printf("\n%d\n", ft_printf("|%d|", -2147483648));
		ft_printf("\n%d\n", ft_printf("|%.10d|", 652));
		ft_printf("\n%d\n", ft_printf("|%.10d|", -652));
		ft_printf("\n%d\n", ft_printf("|%-26d|", 652));
		ft_printf("\n%d\n", ft_printf("|%26d|", 652));
		ft_printf("\n%d\n", ft_printf("|%26.10d|", 652));
		ft_printf("\n%d\n", ft_printf("|%-26.10d|", 652));
		ft_printf("\n%d\n", ft_printf("|%9.16d|", 652));
		ft_printf("\n%d\n", ft_printf("|%-9.16d|", 652));
		return (0);
}
