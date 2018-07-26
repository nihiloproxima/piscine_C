/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cat.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 11:15:20 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 22:45:30 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

int		ft_check(int fd, char *argv)
{
	if (fd == -1 && errno == ENOENT)
		err_not_found(argv);
	if (fd == -1 && errno == EACCES)
		err_permission_denied(argv);
	if (fd == -1 && errno == ENAMETOOLONG)
		err_too_long(argv);
	return (0);
}

int		ft_cat(char *argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	errno = 0;
	fd = open(argv, O_RDONLY);
	ft_check(fd, argv);
	if (fd == -1)
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (errno == EISDIR)
		{
			err_isdir(argv);
			return (0);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
