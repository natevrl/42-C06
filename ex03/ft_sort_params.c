/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:03:49 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/07 17:29:01 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_swap2(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[a] < tab[b])
				ft_swap2(&tab[a], &tab[b]);
			b++;
		}
		a++;
	}
}
int ft_convert(char c)
{
	return c;
}

int main(int argc, char **argv)
{
	printf("%d", ft_convert('3'));
	(void) argv;
	(void) argc;
	int max = argc;
	int i = 0;
 	int tab[argc];
	while (i <= max)
	{
		tab[i] = ft_convert(argv[i]);
		i++;		
	}
	i = 0;
	while (i > 0)
	{
		ft_sort_int_tab(tab, max);
		if (i >  1)
			ft_putstr("\n");
		i--;
	}
	return (0);
}
