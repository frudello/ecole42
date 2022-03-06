/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:45:18 by marvin            #+#    #+#             */
/*   Updated: 2022/01/21 12:01:04 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sm1;
	unsigned char	*sm2;
	size_t			i;

	i = 0;
	sm1 = (unsigned char *)s1;
	sm2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (sm1[i] == sm2[i] && i < (n - 1) && sm1[i])
	{
		i++;
	}
	if (sm2[i] < sm1[i])
		return (1);
	else if (sm2[i] == sm1[i])
		return (0);
	else
		return (-1);
}
