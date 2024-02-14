/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:23:59 by tuaydin           #+#    #+#             */
/*   Updated: 2024/01/30 23:46:29 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i += 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	ft_strlowcase(str);
	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a') && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		else if ((str[i] <= '9' && str[i] >= '0'))
			flag = 0;
		else
		{
			flag = 1;
		}
		i += 1;
	}
	return (str);
}
