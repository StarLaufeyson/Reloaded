/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:48:11 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/28 17:59:17 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_putchar.c"
#include	"ft_putstr.c"
#include	"ft_strcmp.c"
#include	"ft_strlen.c"
#include	"ft_swap.c"

int	main(void)
{
	ft_putchar('c');
	ft_putstr("Mi nombre es Estrella!\n");
	ft_strcmp("abc", "def");
	ft_strlen("Happy Birthday Mr President");
	int	a = 5, b = 10;
	ft_swap(&a, &b);
	return (0);
}

