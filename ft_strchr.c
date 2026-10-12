/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:46:50 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/12 20:00:46 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*str;

	ch = c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
