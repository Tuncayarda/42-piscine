/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:39:21 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/06 20:13:01 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (result);
}
