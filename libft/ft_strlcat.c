/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:45:44 by marvin            #+#    #+#             */
/*   Updated: 2022/01/18 15:25:29 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[o] != '\0' && i + o + 1 < dstsize)
	{
		dst[i + o] = src[o];
		o++;
	}
	if (i != dstsize)
		dst[i + o] = '\0';
	return (i + ft_strlen(src));
}
