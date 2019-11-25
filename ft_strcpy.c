/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:30:40 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/13 12:30:42 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int cpt;

	cpt = 0;
	if (!src && !dst)
		return (NULL);
	while (*src)
	{
		*dst++ = *src++;
		cpt++;
	}
	*dst = '\0';
	dst -= cpt;
	return (dst);
}
