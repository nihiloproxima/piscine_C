/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_table.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 22:28:44 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 22:24:02 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		if (!(i == 8))
			ft_putchar(' ');
		i++;
	}
}

void	ft_print_table(char **tab)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		if (!(i == 9))
			ft_putchar('\n');
		i++;
	}
}
