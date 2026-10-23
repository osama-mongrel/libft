/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:02:32 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/22 08:23:21 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;
	int		i;

	chr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			chr = (char *)s + i;
		i++;
	}
	if (c == '\0')
		chr = (char *)s + i;
	return (chr);
}
