/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:40:47 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 09:12:07 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = new;
	new->next = tmp;
}
/*
int	main()
{
	t_list *lst, *curr;

	lst = ft_lstnew("Hello");
	ft_lstadd_front(&lst, ft_lstnew("Before"));
	ft_lstadd_front(&lst, ft_lstnew("Shake"));

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
