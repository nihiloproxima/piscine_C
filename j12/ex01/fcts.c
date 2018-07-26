/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fcts.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 11:15:13 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 19:37:18 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_err(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_puterr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_err(str[i]);
		i++;
	}
}
