/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:21 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/08 14:06:23 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *sa)
{
	int	i;

	i = 0;
	while (sa[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		i;
	int		len1;
	char	*dest;

	i = 0;
	len1 = len(src);
	dest = malloc((sizeof(char) * len1) + 1);
	if (!dest)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
