/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:46:34 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 09:16:24 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int	main()
{
	t_list *lst, *curr;

	lst = ft_lstnew("Hello");
	ft_lstadd_front(&lst, ft_lstnew("Before"));
	ft_lstadd_front(&lst, ft_lstnew("Shake"));

	int	size = ft_lstsize(lst);
	printf("%d\n", size);
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
