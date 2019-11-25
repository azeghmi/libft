/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:10:33 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/10 18:10:44 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char *ds;
	unsigned char *sr;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	ds = (unsigned char*)dst + len - 1;
	sr = (unsigned char*)src + len - 1;
	while (len--)
		if (s > d)
			*d++ = *s++;
		else
			*ds-- = *sr--;
	return (dst);
}
