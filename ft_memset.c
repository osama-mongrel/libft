/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:45:24 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 13:19:37 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)b;
	i = 0;
	while (i < len)
		a[i++] = c;
	return (b);
}
/*
int	main()
{
	char *s = ft_strdup("Hello");
	if (s != NULL)
		ft_memset(s, 'A', ft_strlen(s));
	printf("%s\n", s);
}
*/
