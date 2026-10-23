/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:42:30 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/22 08:03:05 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a > b)
	{
		a += (len - 1);
		b += (len - 1);
		while (len-- > 0)
			*a-- = *b--;
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
