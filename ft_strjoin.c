/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 07:53:59 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 08:22:59 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	size;

	len1 = ft_strlen(s1);
	size = len1 + ft_strlen(s2) + 1;
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, size);
	ft_strlcat(str, s2, size);
	return (str);
}
/*
int main()
{
	char *s1 = ft_strdup("Hi there,");
	char *s2 = ft_strdup(" Campion");
	char *s = ft_strjoin(s1, s2);
	printf("%s\n", s);
	free(s1);
	free(s2);
	free(s);
}
*/
