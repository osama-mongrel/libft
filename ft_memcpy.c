/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:46:59 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 08:18:37 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (n-- > 0)
		*a++ = *b++;
	return (dst);
}
/*
int	main()
{
	char *src = ft_strdup("Hello");
	char *dst = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));

	if (src != NULL && dst != NULL)
	{
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	}
	printf("%s\n", dst);
	free(src);
	free(dst);
}
*/
