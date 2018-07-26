/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 14:46:47 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 16:55:36 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int width, int height, int x, int y)
{
	if ((width == 1 && height == 1) || (width == x && height == 1) ||
		(width == 1 && height == y) || (width == x && height == y))
		ft_putchar('o');
	else if (width > 1 && width < x && height > 1 && height < y)
		ft_putchar(' ');
	else if ((width > 1 && height == 1 && width < x)
			|| (height == y && width > 1 && width < x))
		ft_putchar('-');
	else
		ft_putchar('|');
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
