/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:54:04 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 09:20:19 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main()
{
	t_list *lst, *curr;

	lst = ft_lstnew("Hello");
	ft_lstadd_front(&lst, ft_lstnew("Before"));
	ft_lstadd_front(&lst, ft_lstnew("Shake"));

	t_list	*last = ft_lstlast(lst);
	printf("%p\n", last);
	printf("%s\n", last->content);
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
