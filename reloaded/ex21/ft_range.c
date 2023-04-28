/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:22:02 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/27 18:50:20 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	length;
	int	*result;

	if (min >= max)
		return (NULL);
	length = max - min;
	result = (int*)malloc(sizeof(int) * length);
	i = 0;

	while (i < length)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

int	main(void)
{
	int	i;
	int	*length;

	length = ft_range(29, 41);
	i = 0;
	while (i < 12)
	{
		printf("%d\n", length[i]);
		i++;
	}
	free(length);
	return (0);
}
