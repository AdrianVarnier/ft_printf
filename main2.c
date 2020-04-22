#include <stdio.h>
#include "ft_printf.h"

int main()
{
		printf("ret = %d\n", printf("%%p::[%010.5d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%010.5d]\n", -8473));
		return (0);
}
