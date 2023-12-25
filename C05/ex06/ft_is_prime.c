/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:28:26 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/06 12:34:32 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;
	int	nprime;
	int	i;

	i = 2;
	prime = 1;
	nprime = 0;
	if (nb <= 1)
	{
		return (nprime);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (nprime);
		}
		i++;
	}
	return (prime);
}
