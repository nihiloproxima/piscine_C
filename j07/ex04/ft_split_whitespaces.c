/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 09:25:12 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 10:52:30 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int carac;
	int count;

	i = 0;
	carac = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
			carac = 1;
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		{
			if (carac == 1)
			{
				carac = 0;
				count += 1;
			}
		}
		i++;
	}
	if (carac == 1)
		count++;
	return (count);
}

int		ft_word_len(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = malloc(sizeof(char *) * (ft_count_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			res[j] = malloc(sizeof(char) * ft_word_len(str, i) + 1);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j][k++] = '\0';
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
