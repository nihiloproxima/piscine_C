/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 14:46:47 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/02 22:29:02 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			{
				if (height == 1 || height == y)
					width > 1 && width < x ? ft_putchar('-') : ft_putchar('o');
				else
					width > 1 && width < x ? ft_putchar(' ') : ft_putchar('|');
			}
			ft_putchar('\n');
		}
	}
}
