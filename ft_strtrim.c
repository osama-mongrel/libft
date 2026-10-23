/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 07:59:31 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/23 09:19:14 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	size_t			len;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	start = i;
	len = ft_strlen(s1);
	if (start == len)
		start = 0;
	i = len;
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	end = i;
	len = end - start;
	str = ft_substr(s1, start, len);
	return (str);
}
