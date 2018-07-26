/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 22:13:13 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:15:29 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>


void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_print_table(char **tab);
int					ft_sudo(char **tab, int x, int y, char num);
int		            checker(char **tab);
int         		ft_strlen(char *str);
#endif
