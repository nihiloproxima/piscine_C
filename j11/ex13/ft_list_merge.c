/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_merge.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 15:02:32 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:42:09 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	list = *begin_list1;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = begin_list2;
	}
}
