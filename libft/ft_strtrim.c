/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:56:22 by frudello          #+#    #+#             */
/*   Updated: 2022/01/21 12:04:46 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fstrchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	c;
	size_t			a;

	c = 0;
	if (!s1 || !set)
		return (0);
	a = (size_t)ft_strlen(s1) - 1;
	if (!set)
		return (ft_strdup(s1));
	while (s1[c] && fstrchr(set, s1[c]))
		c++;
	if (!s1[c])
		return (ft_strdup(""));
	while (s1[a] && fstrchr(set, s1[a]))
		a--;
	a -= c;
	return (ft_substr(s1, c, a + 1));
}
