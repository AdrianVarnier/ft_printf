#include <stdio.h>
#include "ft_printf.h"

int main()
{
		printf("%50.2s\n", NULL);
		printf("%5.0s\n", "Hello");
		printf("%.1s\n", "Test");
		ft_printf("%50.2s\n", NULL);
		ft_printf("%5.0s\n", "Hello");
		ft_printf("%.1s\n", "Test");
		return (0);
}
