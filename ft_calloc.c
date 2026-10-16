/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 07:26:37 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 14:52:03 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ptr = malloc(count * size);
	if (ptr) 
		ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main()
{
	char *s = ft_calloc(sizeof(char), 0);

	printf("%s\n", s);
	ft_strlcpy(s, "Hello", 0);
	printf("%s\n", s);
	free(s);
}
*/
