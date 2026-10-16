/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:19:42 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 16:29:02 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main()
{
	int fd = open("test2.txt", O_WRONLY | O_CREAT);

	ft_putendl_fd("Hello there.", fd);
	close(fd);
}
*/
