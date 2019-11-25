/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:59:11 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/19 13:59:17 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *ptr;

	if (!(ptr = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
