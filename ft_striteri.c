/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:43:07 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 16:19:49 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	plusthus(unsigned int i, char *s)
{
	*s = *s + 1;
}

int main()
{
	char *s = ft_strdup("Hello, Campion");
	ft_striteri(s, plusthus);
	printf("%s\n", s);
	free(s);
}
*/
