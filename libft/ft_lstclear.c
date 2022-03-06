/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello <frudello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:56:20 by frudello          #+#    #+#             */
/*   Updated: 2022/01/21 10:53:37 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		a = (*lst)-> next;
		(*del)((*lst)-> content);
		free (*lst);
		*lst = a;
	}
}
