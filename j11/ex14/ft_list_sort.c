/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_sort.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 15:07:49 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:05:48 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*comp;
	t_list	*swp;

	list = *begin_list;
	while (list->next)
	{
		comp = list->next;
		if (cmp(list->data, comp->data) <= 0)
		{
			list = list->next;
			comp = list->next;
		}
		else if (cmp(list->data, comp->data) > 0)
		{
			swp->data = comp->data;
			comp->data = list->data;
			list->data = swp->data;
		}
	}
}
