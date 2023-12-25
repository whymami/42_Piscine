/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muguveli <muguveli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:15:30 by muguveli          #+#    #+#             */
/*   Updated: 2023/11/07 13:43:03 by muguveli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	a = argc - 1;
	while (a != 0)
	{
		i = 0;
		while (argv[a][i])
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		a--;
		ft_putchar('\n');
	}
}
