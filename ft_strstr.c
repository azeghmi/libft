/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:05:27 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/14 20:05:30 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *h;
	char *n;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		h = (char*)haystack;
		n = (char*)needle;
		while (*h == *n && *n && *h)
		{
			n++;
			h++;
		}
		if (!*n)
			return ((char *)haystack);
		haystack++;
	}
	return ((char*)NULL);
}
