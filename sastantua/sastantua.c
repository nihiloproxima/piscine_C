/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sastantua.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 18:17:26 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 16:54:13 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		largeur(int size)
{
	int floor;
	int base;
	int etoiles;

	floor = 0;
	base = 0;
	etoiles = 12;
	while (floor <= size)
	{
		if (floor == 0)
			base = 7;
		else if (floor == 1)
			base = base + etoiles;
		else if (floor % 2 == 0 || floor % 2 != 0)
		{
			if (floor % 2 == 0)
				etoiles += 2;
			else if (floor % 2 != 0)
				etoiles += 4;
			base = base + etoiles;
		}
		floor++;
	}
	return (base);
}

void	etage(int x, int y, int offset, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = -offset;
		while (j < y - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		j += y + 1 - i;
		ft_putchar('/');
		while (j < x)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int	floor;
	int	x;
	int	y;
	int	offset;

	floor = 0;
	while (floor < size)
	{
		offset = (largeur(size - 1) - largeur(floor)) / 2;
		y = 3 + floor;
		x = largeur(floor);
		etage(x, y, offset, size);
		floor++;
	}
}
