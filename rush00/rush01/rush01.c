/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tdautrem <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 09:19:25 by tdautrem     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 15:01:49 by tdautrem    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_first_line(int length_x, int x)
{
	if (x == 0)
	{
		ft_putchar('/');
	}
	else if (x == length_x - 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	ft_last_line(int length_x, int x)
{
	if (x == 0)
	{
		ft_putchar('\\');
	}
	else if (x == length_x - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	ft_condition(int length_x, int length_y, int x, int y)
{
	if (y == 0)
	{
		ft_first_line(length_x, x);
	}
	else if (y == length_y - 1)
	{
		ft_last_line(length_x, x);
	}
	else
	{
		ft_putchar(x == 0 || x == length_x - 1 ? '*' : ' ');
	}
}

void	rush(int x, int y)
{
	int j;
	int i;

	if (y > 0 && x > 0)
	{
		i = 0;
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				ft_condition(x, y, j, i);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
