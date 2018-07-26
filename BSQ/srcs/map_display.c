/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map_display.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 18:11:24 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 18:51:15 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_display_map(t_map *map)
{
	int		i;

	i = 1;
	while (map->tab[i])
	{
		ft_putstr(map->tab[i]);
		i++;
	}
	i = 0;
	free(map->tab);
}

void	print_error(void)
{
	write(2, "map error\n", 10);
}

void	print_close_error(void)
{
	write(2, "close error\n", 12);
}
