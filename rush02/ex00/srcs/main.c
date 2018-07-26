/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 14:50:42 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 23:15:10 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

t_list	*find_dimensions(int *x, int *y)
{
	char	buf;
	t_list	*str;
	int		j;

	j = 0;
	str = NULL;
	while ((read(0, &buf, 1)))
	{
		*x = j;
		if (buf == '\n')
		{
			j = 0;
			(*y)++;
		}
		else
			j++;
		ft_list_push_back(&str, buf);
	}
	return (str);
}

void	print_result(int x, int y, int i, int count)
{
	if (count >= 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

int		find_type(t_list *str, int x, int y)
{
	int count;

	count = 0;
	if (ft_strcmp(str, rush00(x, y)) == 0)
	{
		print_result(x, y, 0, count++);
		return (0);
	}
	if (ft_strcmp(str, rush01(x, y)) == 0)
	{
		print_result(x, y, 1, count++);
		return (0);
	}
	if (ft_strcmp(str, rush02(x, y)) == 0)
		print_result(x, y, 2, count++);
	if (ft_strcmp(str, rush03(x, y)) == 0)
		print_result(x, y, 3, count++);
	if (ft_strcmp(str, rush04(x, y)) == 0)
		print_result(x, y, 4, count++);
	if (count == 0)
		ft_putstr("aucune");
	return (0);
}

int		main(void)
{
	int		x;
	int		y;
	t_list	*ret;

	x = 0;
	y = 0;
	ret = find_dimensions(&x, &y);
	if (x == 0 || y == 0)
	{
		ft_putstr("aucune\n");
		return (1);
	}
	find_type(ret, x, y);
	ft_putchar('\n');
	return (0);
}
