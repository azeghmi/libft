/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:50:45 by azeghmi           #+#    #+#             */
/*   Updated: 2018/12/05 13:50:47 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnjoin(char const *s1, char const *s2, size_t len)
{
	char		*str;
	char		*ptr;

	if (!(str = ft_strnew(ft_strlen(s1) + len + 1)))
		return (NULL);
	ptr = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2 && len-- > 0)
		*str++ = *s2++;
	*str = 0;
	return (ptr);
}
