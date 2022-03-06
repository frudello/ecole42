/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:45:05 by marvin            #+#    #+#             */
/*   Updated: 2022/01/18 15:27:17 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = ft_strlen (s);
	temp = (char *)s;
	while (temp[i] != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (temp + i);
}
