/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:48:06 by eluno-la          #+#    #+#             */
/*   Updated: 2023/04/28 12:18:20 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		int	j = i + 1;

		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				char *temp = argv[i];
				argv[i] = argv[j];
				argv[i] = temp;
			}

			j++;
		}

		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);

	int	i;

	i = 1;
	while (i < argc)
	{
		int	j;

		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
