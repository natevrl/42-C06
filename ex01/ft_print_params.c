/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:35:39 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/08 14:04:39 by nbenhado         ###   ########.fr       */
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

int	main(int	argc, char	**argv)
{
	int	i;

	i = 1;
	(void) argv;
	(void) argc;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		if (i < argc - 1)
			ft_putstr("\n");
		i++;
	}
	return (0);
}
