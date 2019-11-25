/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:20:32 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/12 14:20:34 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char b;
	unsigned char *src;

	b = (unsigned char)c;
	src = (unsigned char*)s;
	while (n--)
	{
		if (*src++ == b)
			return (src - 1);
	}
	return (NULL);
}
