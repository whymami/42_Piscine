/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:17:18 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/04 15:17:22 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	a = 0;
	while ((src[a] != '\0') && (a < nb))
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
