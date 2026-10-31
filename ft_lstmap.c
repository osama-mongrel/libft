/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 10:23:14 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/27 10:29:02 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new;
	void	*content;

	if (!f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			if (del)
				del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		lst = lst->next;
	}
	return (new_lst);
}
