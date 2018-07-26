/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 15:19:24 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 22:24:22 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	char	**tab;
	int		x;
	int		y;
	char	num;

	num = '1';
	x = 0;
	y = 0;
	if (checker(argv) == 1 || argc != 10)
		ft_putstr("Error\n");
	else
		{
		ft_sudo(argv, x, y, num);
		ft_print_table(argv);
	}
	return (0);
}
