/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:14:06 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/19 16:14:08 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	if (!s || !f)
		return (NULL);
	if (!(d = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)) || !(s && f))
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = f(i, (char)s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
