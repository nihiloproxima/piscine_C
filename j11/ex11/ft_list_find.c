/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_find.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 14:54:42 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 21:28:36 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;

	list = begin_list;
	if (list)
	{
		while (list)
		{
			if (cmp(list->data, data_ref) == 0)
				return (list);
			list = list->next;
		}
	}
	return (NULL);
}
