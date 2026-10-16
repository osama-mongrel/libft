/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:02:32 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 08:17:13 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;
	int		i;

	chr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			chr = (char *)s + i;
		i++;
	}
	if (c == '\0')
		chr = (char *)s + i;
	return (chr);
}
/*
int main()
{
	char *s = ft_strdup("Ciampion");

	char *c = ft_strrchr(s, 'i');
	printf("%s\n", c);
	free(s);
	free(c);
}
*/
