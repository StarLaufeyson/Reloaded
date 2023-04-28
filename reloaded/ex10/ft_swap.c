/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:23:56 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/21 16:07:36 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int  temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	x;
	int y;

	x = 9;
	y = 2;
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
}
