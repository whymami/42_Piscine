/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:00:18 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/04 15:00:21 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
