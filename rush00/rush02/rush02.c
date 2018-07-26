/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tdautrem <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 09:19:25 by tdautrem     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 15:03:18 by tdautrem    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_condition(int length_x, int length_y, int x, int y)
{
	if (y == 0)
	{
		ft_putchar(x == 0 || x == length_x - 1 ? 'A' : 'B');
	}
	else if (y == length_y - 1)
	{
		ft_putchar(x == 0 || x == length_x - 1 ? 'C' : 'B');
	}
	else
	{
		ft_putchar(x == 0 || x == length_x - 1 ? 'B' : ' ');
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
