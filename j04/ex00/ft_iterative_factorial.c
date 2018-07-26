/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 09:41:38 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 11:55:58 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	while (nb > 1 && nb <= 12)
	{
		nb--;
		i = i * nb;
	}
	return (i);
}
