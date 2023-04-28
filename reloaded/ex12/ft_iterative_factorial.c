/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:32:14 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/21 18:04:40 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0 && nb < 12)
	{
		return (0);
	}

	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return result;
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}
