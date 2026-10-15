/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:46:59 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 13:24:38 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (n--)
		*a++ = *b++;
	return (dest);
}
/*
int	main()
{
	char *src = ft_strdup("Hello");
	char *dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));

	if (src != NULL && dest != NULL)
	{
		ft_memcpy(dest, src, ft_strlen(src) + 1);
	}
	printf("%s\n", dest);
}
*/
