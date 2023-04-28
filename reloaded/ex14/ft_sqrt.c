/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:07:24 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/22 15:14:34 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_sqrt(int	nb)
{
	int	sqrt;

	if (nb < 0)
	{
		return (0);
	}
	sqrt = 1;
	while (sqrt * sqrt < nb)
		++sqrt;
	if (sqrt * sqrt ==nb)
		return (sqrt);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(16));
}
