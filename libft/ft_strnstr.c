/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:03:45 by frudello          #+#    #+#             */
/*   Updated: 2022/01/16 14:44:24 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	a;

	h = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[h] != '\0')
	{
		a = 0;
		while (haystack[h + a] == needle[a] && (h + a) < len)
		{
			if (needle[h + a] == '\0' && needle[a] == '\0')
			{
				return ((char *)&haystack[h]);
			}
			a++;
		}
		if (needle[a] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
