/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:34:17 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/26 18:38:45 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, len1 + 1);
	ft_strlcat(s, s2, len1 + len2 + 1);
	return (s);
}
