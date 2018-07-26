/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   header.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 18:10:43 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 18:18:24 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>

# define BUF_SIZE 	4096

typedef struct		s_map
{
	int				width;
	int				height;
	char			empty;
	char			obs;
	char			sqr;
	char			**tab;
}					t_map;

void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
int					ft_atoi(char *str);
void				ft_putnbr(int nb);
void				print_error(void);
void				print_close_error(void);
void				ft_create_map(char *str, char *argv);
int					ft_check_error(t_map *map, char *argv);
int					ft_check_map(char *argv);
void				ft_check_height(t_map *map, char *argv);
void				ft_check_width(t_map *map, char *argv);
void				ft_final_check(t_map *map, char *argv, int x, int i);
void				ft_do_map(t_map *map, char *argv, int x);
void				ft_display_map(t_map *map);
int					ft_char_to_tab(char **tab, char buf, int *i, int *j);
int					ft_resolve_map(t_map *map);
int					resolve_map_1(t_map *map, int *square, int *i, int *j);
int					ft_check_display(t_map *map, int i, int j, int square);
int					ft_check_square(t_map *map, int i, int j, int square);
void				ft_square_found(t_map *map, int i, int j, int square);
int					ft_read_std(char *argv);

#endif
