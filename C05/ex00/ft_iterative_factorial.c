/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:55:19 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/05 18:05:34 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	fac = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i <= nb)
		{
			fac = fac * i;
			if (fac < 0)
			{
				return (0);
			}
			i++;
		}
		return (fac);
	}
}
