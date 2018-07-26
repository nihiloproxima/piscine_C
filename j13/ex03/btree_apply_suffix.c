/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_apply_suffix.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 16:38:30 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 16:39:18 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left != NULL)
			btree_apply_suffix(root->left, applyf);
		if (root->right != NULL)
			btree_apply_suffix(root->right, applyf);
		applyf(root->item);
	}
}
