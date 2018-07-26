/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 11:38:04 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:00:02 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (*begin_list != NULL)
	{
		list = *begin_list;
		while (list->next != NULL)
			list = list->next;
		list->next = ft_create_elem(data);
		list = list->next;
	}
	else
		*begin_list = ft_create_elem(data);
}
