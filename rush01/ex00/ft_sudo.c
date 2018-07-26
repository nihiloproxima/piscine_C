/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sudo.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: losainra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 17:59:12 by losainra     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 23:00:02 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int ft_check_case(int x, int y, char num, char **tab)
{
	int i;
	int j;

	i = ((x - 1) / 3) * 3 + 3;
	j = ((y - 1) / 3) * 3 + 3;
	x = ((x - 1) / 3) * 3;
	y = ((y - 1) / 3) * 3;
	while (y < j)
	{
		while (x < i)
		{
			if (tab[y][x] == num)
				return (1);
			x++;
		}
		x = i - 3;
		y++;
	}
	return (0);
}

int ft_check(int x, int y, char num, char **tab)
{
	int i;

	i = 0;
	while (i < 9)			//check y
	{
		if (tab[y][i] == num)
			return (1);
		i++;
	}
	i = 1;
	while (i < 9)			//check x
	{
		if (tab[i][x] == num)
			return (1);
		i++;
	}
	return (ft_check_case(x, y, num, tab));		//check cases
}

int ft_sudo(char **tab,int x, int y, char num)
{
	while (y < 9)
	{
		while (x < 9)
		{
			while (num <= '9')
			{
				if (ft_check(x, y, num, tab) == 1)
					num++;
				else 
					tab[y][x] = num;
				if (x < 9 && y < 9)
				{
					if (ft_sudo(tab, x, y, num) == 1)
						return (1);
				}
				else
				{
					x = 0;
					y = 1;
					if (ft_sudo(tab, x, y, num) == 1)
						return (1);
				}
				tab[y][x] = '.';
				ft_print_table(char **tab);
				ft_pause();
				x++;
			}
			x = 0;
			y++;
		}
	}
	return (0);
}

