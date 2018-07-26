/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_generic.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 18:31:35 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 18:32:50 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	int		lfouilla;
	char	*str;

	str = "Tut tut ; Tut tut";
	lfouilla = 0;
	while (str[lfouilla])
	{
		ft_putchar(str[lfouilla]);
		lfouilla++;
	}
	ft_putchar('\n');
}
