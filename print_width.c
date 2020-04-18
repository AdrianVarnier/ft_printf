#include "ft_printf.h"

int     print_numwid(t_list *param)
{
		int             x;
		int             count;
		char    c;

		c = ' ';
		count = 0;
		if (param->sign == '-' && param->pre > param->len)
				param->pre++;
		if (param->flag == '-')
				return (0);
		if (param->flag == '0')
				c = '0';
		if (param->wid > param->pre && param->wid > param->len)
		{
				if (param->pre > param->len)
						x = param->wid - param->pre;
				if (param->len > param->pre)
						x = param->wid - param->len;
				while (x > 0)
				{
						ft_putchar_fd(c, 1);
						count++;
						x--;
				}
		}
		return (count);
}

int     print_numnegwidth(t_list *param)
{
		int             x;
		int             count;

		count = 0;

		if (param->flag != '-')
				return (0);
		if (param->wid > param->pre && param->wid > param->len)
		{
				if (param->pre > param->len)
						x = param->wid - param->pre;
				if (param->len > param->pre)
						x = param->wid - param->len;
				while (x > 0)
				{
						ft_putchar_fd(' ', 1);
						count++;
						x--;
				}
		}
		return (count);
}

int     print_swid(t_list *param)
{
		int             x;
		int             count;
		char    c;

		c = ' ';
		count = 0;
		if (param->sign == '-' && param->pre > param->len)
				param->pre++;
		if (param->flag == '-')
				return (0);
		if (param->flag == '0')
				c = '0';
		if (param->wid > param->len)
		{
			if (param->pre > param->len || param->p == 0)
				x = param->wid - param->len;
			else
				x = param->wid - param->pre;
			while (x > 0)
			{
				ft_putchar_fd(c, 1);
				count++;
				x--;
			}
		}
		return (count);
}

int     print_snegwidth(t_list *param)
{
		int             x;
		int             count;

		count = 0;

		if (param->flag != '-')
				return (0);
		if (param->wid > param->len)
		{

			if (param->pre > param->len || param->p == 0)
				x = param->wid - param->len;
			else
				x = param->wid - param->pre;
			while (x > 0)
			{
					ft_putchar_fd(' ', 1);
					count++;
					x--;
			}
		}
		return (count);
}
