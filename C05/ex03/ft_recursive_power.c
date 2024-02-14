/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:39:36 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/06 21:41:39 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power > 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (result);
}
