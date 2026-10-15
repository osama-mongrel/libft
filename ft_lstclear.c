/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:53:17 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 09:45:21 by oben-el          ###   ########.fr       */
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
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
}
/*
void	erase(void *content)
{
	printf("Erased: %s\n", content);
	free(content);
}

int	main()
{
	t_list *lst;
	char	*s = "Hello";
	void	*content = ft_strdup(s);
	lst = ft_lstnew(content);
	content = ft_strdup("Before");
	ft_lstadd_front(&lst, ft_lstnew(content));
	content = ft_strdup("Shake");
	ft_lstadd_front(&lst, ft_lstnew(content));

	ft_lstclear(&lst, erase);
}
*/
