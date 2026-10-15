/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:50:12 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 09:53:25 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	erase(void *content)
{
	printf("Erased: %s\n", content);
	free(content);
}

int	main()
{
	t_list *lst, *curr;
	char	*s = "Hello";
	void	*content = ft_strdup(s);
	lst = ft_lstnew(content);
	content = ft_strdup("Before");
	ft_lstadd_front(&lst, ft_lstnew(content));
	content = ft_strdup("Shake");
	ft_lstadd_front(&lst, ft_lstnew(content));

	ft_lstdelone(lst->next->next, erase);
	lst->next->next = NULL;
	while (lst)
	{
		printf("%p\n", lst);
		printf("%s\n", lst->content);
		erase(lst->content);
		curr = lst;
		lst = lst->next;
		free(curr);
	}

}
*/
