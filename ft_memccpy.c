/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:06:15 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/19 14:06:18 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	a;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	a = (unsigned char)c;
	while (n--)
	{
		*d = *s;
		if (*s == a)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}
