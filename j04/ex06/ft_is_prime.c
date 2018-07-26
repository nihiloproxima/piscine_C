/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 22:52:54 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 10:16:49 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int	count;
	int	test;

	i = 2;
	test = 0;
	count = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			test = i;
			count++;
		}
		i++;
	}
	if (test == nb && count == 1)
		return (1);
	else
		return (0);
}
