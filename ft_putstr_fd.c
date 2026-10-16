/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:56:01 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 16:26:36 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}
/*
int	main()
{
	int fd = open("test1.txt", O_WRONLY | O_CREAT);
	
	ft_putstr_fd("Hello there.\n", fd);
	close(fd);
}
*/
