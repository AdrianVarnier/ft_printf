#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char	*s = NULL;
	printf("%d\n", printf("-->|%-16.s|<--\n", s));
	printf("%d\n", ft_printf("-->|%-16.s|<--\n", s));
	return (0);
}
