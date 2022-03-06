/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:29:20 by frudello          #+#    #+#             */
/*   Updated: 2022/01/26 17:31:11 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*f;
	size_t	c;
	size_t	a;

	c = 0;
	a = 0;
	if (!s1 || !s2)
		return (0);
	f = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
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
	free(s1);
	return (f);
}

char	*ft_bh(char *s)
{
	char	*bh;
	int		i;
	int		a;

	a = 0;
	i = 0;
	if (!*s)
		return (0);
	while (s[a] != '\n' && s[a])
		a++;
	bh = (char *)malloc(a + 2);
	if (!bh)
		return (0);
	while (s[i] && s[i] != '\n')
	{
		bh[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		bh[i] = '\n';
		i++;
	}
	bh[i] = '\0';
	return (bh);
}

char	*ft_dst(char *s)
{
	char	*dst;
	int		i;
	int		a;

	a = 0;
	i = ft_strnlen(s, '\n');
	if (!s[i])
	{
		free(s);
		return (0);
	}
	dst = (char *)malloc(ft_strlen(s) - i + 1);
	if (!dst)
		return (0);
	i++;
	while (s[i])
		dst[a++] = s[i++];
	dst[a] = '\0';
	free(s);
	return (dst);
}

char	*ft_read(int fd, char *dst)
{
	char		*buffer;
	int			size;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	size = 1;
	while (!ft_strchr(dst, '\n') && size != 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size < 0)
		{
			free(buffer);
			free(dst);
			return (0);
		}
		buffer[size] = '\0';
		dst = ft_strjoin(dst, buffer);
	}
	free(buffer);
	return (dst);
}

char	*get_next_line(int fd)
{
	static char	*dst;
	char		*bh;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!dst)
		dst = ft_calloc(1, 1);
	dst = ft_read(fd, dst);
	if (!dst)
		return (0);
	bh = ft_bh(dst);
	dst = ft_dst(dst);
	return (bh);
}
