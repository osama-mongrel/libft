/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:53:17 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/14 17:12:12 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*current;

	if (*lst == NULL)
		return ;
	current = *lst;
	next = current->next;
	while (next)
	{
		ft_lstdelone(current, del);
		current = next;
		next = next->next;
	}
}
