/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:19:03 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/15 18:35:25 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main()
{
	char *s1 = ft_strdup("Campions");
	char *s2 = ft_strdup("Campion");

	int are_same = ft_memcmp(s1, s2, 8);
	int are_same1 = memcmp(s1, s2, 8);
	printf("%d\n", are_same);
	printf("%d\n", are_same1);
}
*/
