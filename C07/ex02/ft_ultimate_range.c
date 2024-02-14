/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:43:14 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/07 23:48:48 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buff;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buff = malloc(sizeof(int) * (size));
	if (buff == NULL)
		return (-1);
	while (min < max)
	{
		buff[i] = min;
		min++;
		i++;
	}
	*range = buff;
	return (size);
}
