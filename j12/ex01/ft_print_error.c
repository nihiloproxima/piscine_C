/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_error.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 14:06:02 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 14:13:01 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

void	err_isdir(char *argv)
{
	ft_puterr("ft_cat: ");
	ft_puterr(argv);
	ft_puterr(": Is a directory\n");
}

void	err_not_found(char *argv)
{
	ft_puterr("ft_cat: ");
	ft_puterr(argv);
	ft_puterr(": No such file or directory\n");
}

void	err_permission_denied(char *argv)
{
	ft_puterr("ft_cat: ");
	ft_puterr(argv);
	ft_puterr(": Permission denied.\n");
}

void	err_too_long(char *argv)
{
	ft_puterr("ft_cat: ");
	ft_puterr(argv);
	ft_puterr(": File too long\n");
}
