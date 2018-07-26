/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fibonacci.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:35:52 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 15:30:56 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	if (index == 3)
		return (2);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
