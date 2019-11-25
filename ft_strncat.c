/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:08:29 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/13 16:08:31 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char*str;
	int i;
	int	j;

	str = (char*)s1;
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (n > 0 && s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
		n--;
	}
	str[i] = '\0';
	return (str);
}
