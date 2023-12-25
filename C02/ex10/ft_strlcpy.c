/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:04:30 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/01 19:59:03 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char	*yazi)
{
	int	a;

	a = 0;
	while (yazi[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a1;

	a1 = len(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (a1);
}
