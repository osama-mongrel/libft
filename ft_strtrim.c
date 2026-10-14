/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 07:59:31 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/14 12:10:22 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	size_t			size;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	start = i;
	if (start == ft_strlen(s1))
		start = 0;
	i = ft_strlen(s1);
	while (i > 0 && s1[i - 1] && ft_strchr(set, s1[i - 1]))
		i--;
	end = i;
	size = end - start + 1;
	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, size);
	return (str);
}
