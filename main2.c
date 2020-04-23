#include <stdio.h>
#include "ft_printf.h"

int main()
{
		printf("neg2 %*.*d\n", -9, 4, 1555);
		ft_printf("neg2 %*.*d\n", -9, 4, 1555);
		return (0);
}
