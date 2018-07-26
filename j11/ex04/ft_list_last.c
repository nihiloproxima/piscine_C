/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_last.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 12:18:39 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:45:57 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	if (begin_list->next)
		return (ft_list_last(begin_list->next));
	return (begin_list);
}
