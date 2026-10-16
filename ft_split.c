/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:10:10 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 14:51:20 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	substrs_count(char const *s, char c)
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
			count++;
	}
	return (count);
}

static void	free_strs(char **strs, unsigned int count)
{
	while (count > 0)
		free(strs[count-- - 1]);
	free(strs);
}

static void	substrs_cpy(char const *s, char c, char **strs)
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
			strs[count] = ft_substr(s, mark, i - mark);
			if (strs[count] == NULL)
			{
				free_strs(strs, count);
				strs = NULL;
				break ;
			}
			count++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char			**strs;
	unsigned int	count;

	count = substrs_count(s, c);
	strs = (char **)malloc((count + 1) * sizeof(char *));
	if (strs == NULL)
		return (strs);
	strs[count] = NULL;
	substrs_cpy(s, c, strs);
	return (strs);
}
/*
int	main()
{
	char *s = ft_strdup("hello there campion, how are you?");

	char **strs = ft_split(s, ' ');
	int i = 0;
	while (strs[i])
		printf("%s\n", strs[i++]);
	free(s);
}
*/
