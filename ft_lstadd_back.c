/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:57:09 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 09:22:44 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last == NULL)
		*lst = new;
	else
		last->next = new;
}
/*
int	main()
{
	t_list *lst, *curr;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("Before"));
	ft_lstadd_back(&lst, ft_lstnew("Shake"));

	while (lst)
	{
		printf("%p\n", lst);
		printf("%s\n", lst->content);
		curr = lst;
		lst = lst->next;
		free(curr);
	}
}
*/
