/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_apply_infix.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 16:37:16 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 16:38:13 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left != NULL)
			btree_apply_infix(root->left, applyf);
		applyf(root->item);
		if (root->right != NULL)
			btree_apply_infix(root->right, applyf);
	}
}
