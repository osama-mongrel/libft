/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:29:13 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 16:17:49 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
char	plusthus(unsigned int i, char c)
{
	return (1 + c);
}

int main()
{
	char *s = ft_strdup("Hello, Campion");

	char *str = ft_strmapi(s, plusthus);
	printf("%s\n", str);
	free(s);
	free(str);
}
*/
