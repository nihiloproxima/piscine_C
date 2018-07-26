/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_at.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 13:52:42 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:20:57 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*list;
	unsigned	i;

	i = 1;
	list = begin_list;
	if (list)
	{
		while (i < nbr)
		{
			list = list->next;
			i++;
		}
	}
	return (list);
}
