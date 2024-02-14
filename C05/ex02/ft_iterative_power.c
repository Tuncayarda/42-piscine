/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:15:42 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/06 20:21:35 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power > 0)
	{
		result = 1;
		while (0 < power--)
		{
			result = result * nb;
		}
	}
	else if (power == 0)
	{
		return (1);
	}
	return (result);
}
