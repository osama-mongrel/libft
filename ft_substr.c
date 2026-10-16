/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 07:39:07 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 08:14:48 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			size;

	size = ft_strlen(s + start);
	if (size > len)
		size = len;
	substr = (char *)malloc((size + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, size + 1);
	return (substr);
}
/*
int	main()
{
	char *s = ft_strdup("Hi there, Campion!");

	char *sub = ft_substr(s, 10, 7);

	printf("%s\n", sub);
	free(s);
	free(sub);
}
*/
