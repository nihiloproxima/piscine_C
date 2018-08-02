/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 09:19:25 by tdautrem     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/02 23:12:04 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int width, int height, int x, int y)
{
	if ((height == 1 && width == 1) || (height == y && width == x))
		ft_putchar('A');
	else if ((width == x && height == 1) || (width == 1 && height == y))
		ft_putchar('C');
	else if (width > 1 && width < x && height > 1 && height < y)
		ft_putchar (' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int width;
	int height;

	height = 0;
	if (x > 0 && y > 0)
	{
		while (height++ < y)
		{
			width = 0;
			while (width++ < x)
				print_line(width, height, x, y);
			ft_putchar('\n');
		}
	}
}
