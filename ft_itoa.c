/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:56:16 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/23 11:56:18 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				nb;
	unsigned int	nbr;

	nb = n;
	len = (n < 0 ? 2 : 1);
	while (nb /= 10)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (n <= 0)
		str[0] = (n < 0 ? 45 : 48);
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	while (nbr)
	{
		str[len--] = ((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	return (str);
}
