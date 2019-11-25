/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:09:21 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/17 15:09:24 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *h;

	h = ft_strdup(haystack);
	h[len] = 0;
	if (!*needle)
		return ((char*)haystack);
	while (*h)
	{
		if (!ft_strncmp(h++, (char*)needle, ft_strlen(needle)))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
