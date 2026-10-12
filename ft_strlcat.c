/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:38:24 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/12 18:52:49 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	m;
	size_t	i;

	n = 0;
	while (src[n])
		n++;
	m = 0;
	while (dst[m])
		m++;
	if (dstsize == 0)
		return (n + m);
	i = 0;
	while (src[i] && m + i < dstsize - 1)
	{
		dst[m + i] = src[i];
		i++;
	}
	dst[m + i] = '\0';
	return (n + m);
}
