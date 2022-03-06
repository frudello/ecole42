/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:36:27 by frudello          #+#    #+#             */
/*   Updated: 2022/01/21 12:05:26 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*f;
	size_t	size;
	size_t	c;
	size_t	a;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	f = (char *)malloc(size);
	c = 0;
	a = 0;
	if (!f)
		return (0);
	while (s1[c])
	{
		f[c] = s1[c];
		c++;
	}
	while (s2[a])
		f[c++] = s2[a++];
	f[c++] = '\0';
	return (f);
}
