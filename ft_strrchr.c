/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:23:26 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/26 11:25:42 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p)
		p++;
	if (*p == (char)c)
		return (p);
	while (p >= s)
	{
		if (*p == (char)c)
			return (p);
		p--;
	}
	return (NULL);
}
