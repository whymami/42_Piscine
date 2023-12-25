/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:53:31 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/09 17:01:44 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range[0] = malloc(sizeof(int) * (max - min));
	if (!range[0])
	{
		*range = 0;
		return (-1);
	}
	i = -1;
	while (++i < max - min)
	{
		range[0][i] = min + i;
	}
	return (max - min);
}
