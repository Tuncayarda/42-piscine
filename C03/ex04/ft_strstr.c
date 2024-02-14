/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 01:24:11 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/03 15:06:00 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] && to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
