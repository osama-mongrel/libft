/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:10:10 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/13 12:10:14 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_ptrs_arr(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	mark;
	char			**strs;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		mark = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > mark)
			count++;
	}
	strs = (char **)malloc((count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs[count] = NULL;
	return (strs);
}

static int	cpy_str(char **strs, char const *s, \
		unsigned int start, unsigned int end)
{
	unsigned int	size;

	size = end - start + 1;
	*strs = (char *)malloc(size * sizeof(char));
	if (!(*strs))
		return (0);
	ft_strlcpy(*strs, s + start, size);
	return (1);
}

static void	free_strs(char **strs, unsigned int count)
{
	while (count > 0)
		free(strs[count-- - 1]);
	free(strs);
}

static int	cpy_substrs(char const *s, char c, char **strs)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	mark;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		mark = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > mark)
		{
			if (!cpy_str(&strs[count], s, mark, i))
			{
				free_strs(strs, count);
				return (-1);
			}
			count++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = alloc_ptrs_arr(s, c);
	if (!strs)
		return (strs);
	if (cpy_substrs(s, c, strs) == -1)
		return (NULL);
	return (strs);
}
