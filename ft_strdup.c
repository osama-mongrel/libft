/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:27:11 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/26 16:30:10 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s);
	dup = malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	ft_memmove(dup, s, size + 1);
	return (dup);
}
