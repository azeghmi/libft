/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:32:14 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/19 16:32:16 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*s1;

	i = 0;
	if (!s || !(s1 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len--)
		s1[i++] = s[start++];
	s1[i] = '\0';
	return (s1);
}
