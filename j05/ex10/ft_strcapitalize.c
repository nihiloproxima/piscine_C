/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:22:32 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 16:43:57 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanum(str[i - 1]) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!ft_is_alphanum(str[i - 1]) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
