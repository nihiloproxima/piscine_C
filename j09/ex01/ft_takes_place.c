/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takes_place.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 19:30:26 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 19:30:40 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 0 || hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	else if (hour > 0 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour);
		printf(".00 A.M. AND %d", hour + 1);
		printf(".00 A.M.\n");
	}
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour);
		printf(".00 P.M. AND %d", hour + 1 - 12);
		printf(".00 P.M.\n");
	}
	else if (hour >= 12 && hour < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour - 12);
		printf(".00 P.M. AND %d", hour + 1 - 12);
		printf(".00 P.M.\n");
	}
}

int		main(void)
{
	ft_takes_place(12);
	return (0);
}
