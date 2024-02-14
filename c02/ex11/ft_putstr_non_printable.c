/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:29:51 by tuaydin           #+#    #+#             */
/*   Updated: 2024/01/31 16:50:22 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			ft_putchar(hex[str[i] / 16]);
			ft_putchar(hex[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
