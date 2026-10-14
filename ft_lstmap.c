/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:14:22 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/14 17:49:20 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	creat_content(void *content, t_list *node, void *(*f)(void *))
{
	content = f(node->content);
	if (content == NULL)
		return (0);
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new;
	void	*content;

	new_lst = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if (!creat_content(content, lst, f))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new = ft_lstnew(content);
		if (new == NULL)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		lst = lst->next;
	}
	return (new_lst);
}
