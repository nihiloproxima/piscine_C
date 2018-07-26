/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   header.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 13:25:37 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 15:25:07 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define BUF_SIZE 4096
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

int		ft_cat(char *argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putchar_err(char c);
void	ft_puterr(char *str);
void	err_isdir(char *argv);
void	err_not_found(char *argv);
void	err_permission_denied(char *argv);
void	err_too_long(char *argv);

#endif
