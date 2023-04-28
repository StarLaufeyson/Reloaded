/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:19:15 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/28 17:55:07 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
/*#include	<stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
			break;
		}
		else if (s1[i] > s2[i])
		{
			return (1);
			break;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Hello1"));
	printf("%d\n", ft_strcmp("Hello", "He"));
	printf("%d\n", ft_strcmp("He", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "Hello"));
}*/
