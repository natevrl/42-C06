/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:46:54 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/07 15:51:30 by nbenhado         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	(void) argv;
	(void) argc;
	int i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		
		if (i >  1)
			ft_putstr("\n");
		i--;
	}
	return (0);
}
