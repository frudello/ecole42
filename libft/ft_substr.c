/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:43:54 by frudello          #+#    #+#             */
/*   Updated: 2022/01/21 12:01:55 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*f;
	size_t	c;

	c = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	f = (char *)malloc(len + 1);
	if (!f)
		return (0);
	if (start <= ft_strlen(s))
		while (s[start] && c < (len))
			f[c++] = s[start++];
		f[c] = '\0';
	f[len + 1] = '\0';
	return (f);
}
