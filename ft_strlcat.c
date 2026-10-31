/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:10:30 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/26 15:37:13 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen >= size)
		return (size + slen);
	dst = dst + dlen;
	size = size - dlen;
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (dlen + slen);
}
