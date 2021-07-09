/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:03:49 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/09 12:06:17 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

void	ft_swap2(char **a, char **b)
{
	char	*c;

	c = *b;
	*b = *a;
	*a = c;
}

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	if (*s1 > *s2)
		return (1);
	else if (*s2 == *s1)
		return (0);
	else
		return (-1);
}

void	ft_sort_int_tab(char	**argv)
{
	int	a;
	int	b;
	int	compare;

	a = 1;
	while (argv[a])
	{
		b = 1;
		while (argv[b])
		{
			compare = ft_strcmp(argv[a], argv[b]);
			if (compare == -1)
				ft_swap2(&argv[a], &argv[b]);
			b++;
		}
		a++;
	}
}

int	main(int	argc, char	**argv)
{
	int	i;

	if (argc > 0)
		ft_sort_int_tab(argv);
	i = 1;
	while (argv[i])
	{
		if (i == 0)
			i++;
		else
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
