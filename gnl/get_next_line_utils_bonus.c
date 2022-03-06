/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:28:50 by frudello          #+#    #+#             */
/*   Updated: 2022/01/26 17:29:51 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}

size_t	ft_strnlen(char *s, int n)
{
	size_t	a;

	a = 0;
	while (s[a] && s[a] != (char) n)
		a++;
	return (a);
}

char	*ft_strchr(char *s, int c)
{
	int	len;

	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*v;

	tot_size = count * size;
	v = malloc(tot_size);
	if (!v)
		return (0);
	ft_bzero (v, tot_size);
	return (v);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
