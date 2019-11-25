/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:19:00 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/19 18:19:02 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	value;

	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		n = ((n ^ (-1)) + 1);
	}
	value = (unsigned int)n;
	if (value > 9)
		ft_putnbr_fd(value / 10, fd);
	ft_putchar_fd((value % 10) + 48, fd);
}
