/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:29:41 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/05 18:51:11 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		putstr(av[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
