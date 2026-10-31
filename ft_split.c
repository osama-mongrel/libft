/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:47:43 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/27 11:25:10 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_strs(char **strs, int i)
{
	while (i--)
		free(strs[i]);
	free(strs);
	return (NULL);
}

static int	count_strs(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**fill_strs(char **strs, char const *s, char c)
{
	int	end;
	int	start;
	int	i;

	end = 0;
	i = 0;
	while (s[end])
	{
		while (s[end] && s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
		{
			strs[i] = ft_substr(s, start, end - start);
			if (!strs[i])
				return (free_strs(strs, i));
			i++;
		}
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		count;

	if (!s)
		return (NULL);
	count = count_strs(s, c);
	strs = malloc((count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs[count] = NULL;
	strs = fill_strs(strs, s, c);
	return (strs);
}
