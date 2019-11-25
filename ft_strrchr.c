/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:59:40 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/14 18:59:41 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int cpt;

	cpt = ft_strlen((char*)s);
	while (cpt != 0 && s[cpt] != (char)c)
		cpt--;
	if (s[cpt] == (char)c)
		return ((char*)s + cpt);
	return (NULL);
}
