/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:09:02 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 08:16:36 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char *s1 = ft_strdup("Campions");
	char *s2 = ft_strdup("Campion");

	int are_same = ft_strncmp(s1, s2, 20);
	int are_same1 = strncmp(s1, s2, 20);
	printf("%d\n", are_same);
	printf("%d\n", are_same1);
	free(s1);
	free(s2);
}
*/
