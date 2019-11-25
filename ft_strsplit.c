/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:24:54 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/23 14:24:56 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nbw(const char *s, char c)
{
	int i;
	int nbw;

	i = 0;
	nbw = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i])
				i++;
			nbw++;
		}
	}
	return (nbw);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = NULL;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (ft_nbw(s, c) + 1))))
		return (NULL);
	tab[ft_nbw(s, c)] = 0;
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
		if (s[i] == c)
			i++;
		else
		{
			j = i;
			while (s[i] != c && s[i])
				i++;
			if (!(tab[k++] = ft_strsub(s, j, i - j)))
				return (NULL);
		}
	tab[k] = NULL;
	return (tab);
}
