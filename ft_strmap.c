/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:49:30 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/19 15:49:32 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*d;
	int		i;

	if (!s || !f)
		return (NULL);
	if (!(d = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)) || !(s && f))
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = f((char)s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
