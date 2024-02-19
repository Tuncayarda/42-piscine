/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:54:06 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/19 23:26:00 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	flag = 0;
	i = 2;
	if (nb < 1)
		return (2);
	while (nb <= 2147483647 && nb > 1)
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
			{
				flag = 1;
				break ;
			}
			i++;
		}
		if (flag == 0)
			return (nb);
		flag = 0;
		i = 2;
		nb++;
	}
	return (0);
}
