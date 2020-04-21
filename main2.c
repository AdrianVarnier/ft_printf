#include <stdio.h>
#include "ft_printf.h"

int main()
{
		printf("ret = %d\n", ft_printf("%%p::[%010d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%10d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", -8473));
		printf("ret = %d\n", ft_printf("%%p::[%010d]\n", 8473));
		printf("ret = %d\n", ft_printf("%%p::[%10d]\n", 8473));
		printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", 8473));
		printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", 8473));
		printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", 8473));
		printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", 8473));
		printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", 8473));
		printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", 8473));
		ft_printf("--------------------------------------------------\n");
		ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", -8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", 8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", 8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", 8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", 8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", 8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", 8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", 8473));
		ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", 8473));
		return (0);
}
