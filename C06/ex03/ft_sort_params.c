/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:53:25 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/06 19:46:58 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s2[i] < s1[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_av(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		ft_putstr(av[i++]);
	}
}

int	main(int ac, char *av[])
{
	int		i;
	char	*temp;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) == 1)
		{
			temp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
	ft_print_av(av);
	return (0);
}
