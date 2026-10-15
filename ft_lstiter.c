/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:58:21 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 10:04:06 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	erase(void *content)
{
	printf("Erased: %s\n", content);
	free(content);
}

void	ft_putstr(void *s)
{
	printf("%s\n", s);
}

void	settoone(void *s)
{
	ft_putstr(s);
	ft_memset(s, 'A', ft_strlen(s));
	ft_putstr(s);
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

	ft_lstiter(lst,	settoone);

	ft_lstclear(&lst, erase);
}
*/
