/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 11:15:31 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 13:38:57 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 1;
	while (argc == 1)
	{
		read(0, &c, 1);
		ft_putchar(c);
	}
	while (i < argc)
	{
		ft_cat(argv[i]);
		i++;
	}
	return (0);
}
