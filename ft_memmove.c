/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:42:30 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 18:46:54 by oben-el          ###   ########.fr       */
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
		while (len--)
			a[len] = b[len];
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
/*
int	main()
{
	char *src = ft_strdup("Hello");
	char *dest = src + 1;

	if (src != NULL && dest != NULL)
	{
		ft_memmove(dest, src, 4);
	}
	printf("%s\n", dest);
	printf("%s\n", src);
}
*/
