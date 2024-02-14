/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:16:31 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/11 19:50:47 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_total_size(int size, char **strs, char *sep)
{
	int	total_size;
	int	i;
	int	j;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			total_size++;
		j = 0;
		while (sep[j++] && i < size -1)
			total_size++;
		i++;
	}
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buff;
	int		i;
	int		j;
	int		k;

	buff = malloc(ft_total_size(size, strs, sep) + 1);
	if (buff == NULL)
		return (0);
	i = 0;
	k = 0;
	if (size == 0)
		return (buff);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			buff[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			buff[k++] = sep[j++];
		i++;
	}
	buff[k] = '\0';
	return (buff);
}
