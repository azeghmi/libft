/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:33:27 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/21 20:33:30 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (!*s)
		return (ft_strdup("\0"));
	len = ft_strlen(s);
	i = len - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strncpy(str, s, i + 1);
	str[i + 1] = 0;
	return (str);
}
