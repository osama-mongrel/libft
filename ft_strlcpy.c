/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:06:32 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/26 11:10:24 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (slen);
}
