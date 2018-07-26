/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 14:55:26 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 15:48:22 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_serie(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = (a + 1);
		while (b <= '8')
		{
			c = (b + 1);
			while (c <= '9')
			{
				ft_print_serie(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
