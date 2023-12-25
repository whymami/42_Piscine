/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:38:58 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/09 16:57:17 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*sayi;
	int	i;

	if (min >= max)
		return (0);
	sayi = malloc(sizeof(int) * (max - min));
	if (!sayi)
		return (0);
	i = -1;
	while (++i < max - min)
	{
		sayi[i] = min + i;
	}
	return (sayi);
}
