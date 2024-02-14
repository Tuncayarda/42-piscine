/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 00:16:17 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/12 13:29:16 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	dup = malloc(ft_strlen(str) + 1);
	if (!dup)
		return (0);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*test;
	int					idx;

	idx = 0;
	test = malloc((ac + 1) * (sizeof(struct s_stock_str)));
	if (!test)
		return (0);
	while (idx < ac)
	{
		test[idx].size = ft_strlen(av[idx]);
		test[idx].str = av[idx];
		test[idx].copy = ft_strdup(av[idx]);
		idx++;
	}
	test[idx].str = 0;
	return (test);
}
