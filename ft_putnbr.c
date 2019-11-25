/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:10:19 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/19 18:10:21 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	value;

	if (n < 0)
	{
		ft_putchar(45);
		n = ((n ^ (-1)) + 1);
	}
	value = (unsigned int)n;
	if (value > 9)
		ft_putnbr(value / 10);
	ft_putchar((value % 10) + 48);
}
