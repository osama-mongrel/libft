/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 07:39:07 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/24 09:47:07 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sublen;
	size_t	slen;

	if (!s || !len)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	sublen = slen - start;
	if (sublen > len)
		sublen = len;
	substr = (char *)malloc((sublen + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, sublen + 1);
	return (substr);
}
