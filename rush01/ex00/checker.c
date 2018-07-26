/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checker.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 16:32:27 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:57:40 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		checker(char **tab)
{
	int	x;
	int	y;

	y = 0;
	while (tab[y])
	{
		x = 0;
		if (ft_strlen(tab[y]) != 9)
			return (1);
		while (tab[y][x])
		{
			if (!((tab[y][x] >= '1' && str[y][x] <= '9') || tab[y][x] == '.'))
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}
