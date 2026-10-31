/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 08:21:15 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/27 08:25:26 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sptr;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	sptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sptr[i] = f(i, s[i]);
		i++;
	}
	sptr[i] = '\0';
	return (sptr);
}
