/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:42:03 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/10 17:42:12 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ptrdst;
	unsigned char *ptrsrc;

	ptrdst = (unsigned char*)dst;
	ptrsrc = (unsigned char*)src;
	while (n--)
	{
		*ptrdst++ = *ptrsrc++;
	}
	return (dst);
}
