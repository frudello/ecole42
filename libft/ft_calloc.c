/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:41:03 by frudello          #+#    #+#             */
/*   Updated: 2022/01/16 16:18:13 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
