/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:32:02 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/28 13:00:30 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	size;
	char	*memo;

	size = 0;
	while (src[size])
		++size;
	if (!(memo = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		memo[i] = src[i];
		i++;
	}
	memo[i] = '\0';
	return (memo);
}

int	main(void)
{
	printf("%s\n", ft_strdup("Good morning Vietnam!"));
	return (0);
}
