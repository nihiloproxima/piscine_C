/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 11:20:45 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 17:44:15 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);
t_list				*ft_list_find(t_list *begin_list, void *data_ref,
					int (*cmp)());

#endif
