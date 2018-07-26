/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:47:10 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 21:47:22 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (i < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}
