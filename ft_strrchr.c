/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:02:32 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/12 20:06:40 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;
	char	ch;
	int		i;

	chr = NULL;
	ch = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			chr = (char *)s + i;
		i++;
	}
	return (chr);
}
