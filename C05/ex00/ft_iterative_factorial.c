/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:24:13 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/07 01:19:56 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb--;
	}
	return (result);
}
