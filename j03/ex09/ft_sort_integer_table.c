/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_integer_table.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 22:33:10 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 22:33:15 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	cmp;
	int	swp;

	i = 0;
	cmp = 0;
	swp = 0;
	while (i < size)
	{
		cmp = i + 1;
		while (cmp != size)
		{
			if (tab[cmp] < tab[i])
			{
				swp = tab[i];
				tab[i] = tab[cmp];
				tab[cmp] = swp;
			}
			cmp++;
		}
		i++;
	}
}
