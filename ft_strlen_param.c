#include "ft_printf.h"

int     ft_strlen_param(const char *s, t_list *param)
{
		int i;

		if (s == NULL)
		{
			param->s == 0;
			return (6);
		}
		param->s == 1;
		i = 0;
		while (s[i] != '\0')
				i++;
		return (i);
}
