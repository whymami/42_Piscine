/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:51:22 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/01 19:59:49 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*low(char *str1)
{
	int	a;

	a = 0;
	while (str1[a] != '\0')
	{
		if (str1[a] >= 65 && str1[a] <= 90)
		{
			str1[a] = str1[a] + 32;
		}
		a++;
	}
	return (str1);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 1;
	low(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i1 == 1)
				str[i] = str[i] - 32;
			i1 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i1 = 0;
		else
		{
			i1 = 1;
		}
		i++;
	}
	return (str);
}
