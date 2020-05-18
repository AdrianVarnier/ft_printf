#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int	u = 1;
	printf("%d\n", printf("t-->|%0*.1u|<--\n", 5, u));
	printf("%d\n", ft_printf("f-->|%0*.1u|<--\n", 5, u));
	return (0);
}
