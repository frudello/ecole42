/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:42:49 by frudello          #+#    #+#             */
/*   Updated: 2022/01/19 22:42:25 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	fcount(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*f;
	long	a;

	i = fcount(n);
	a = n;
	if (a < 0)
	{
		a *= -1;
		i++;
	}
	f = (char *)malloc(i + 1);
	if (!f)
		return (0);
	f[i] = '\0';
	while (i--)
	{
		f[i] = (char)((a % 10) + 48);
		a /= 10;
	}
	if (n < 0)
		f[0] = '-';
	return (f);
}
