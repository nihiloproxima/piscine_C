/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_remove_if.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 14:59:30 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:41:07 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*list_after;
	t_list	*list_before;

	list = *begin_list;
	list_before = *begin_list;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			list_after = list->next;
			free(list);
			list_before->next = list_after;
			list = list_after;
		}
		else
			list = list->next;
	}
}
