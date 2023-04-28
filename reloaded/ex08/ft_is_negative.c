/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:36:41 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/21 15:14:50 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('P');
		ft_putchar('\n');
	}
}

int	main(void)
{
	ft_is_negative(34);
	ft_is_negative(-59);
	ft_is_negative(0);
	return (0);
}
