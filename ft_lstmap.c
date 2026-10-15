/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:14:22 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 10:32:01 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	new_lst = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		if (content == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
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

void	*settoone(void *s)
{
	char *str = ft_strdup(s);
	ft_putstr(str);
	ft_memset(str, 'A', ft_strlen(str));
	ft_putstr(str);
	return (str);
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

	t_list *new_lst = ft_lstmap(lst, settoone, erase);

	ft_lstclear(&lst, erase);
	ft_lstclear(&new_lst, erase);
}
*/
