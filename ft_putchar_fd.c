/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:53:25 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 16:23:06 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	int fd = open("test.txt", O_WRONLY | O_CREAT);

	ft_putchar_fd('H', fd);
	ft_putchar_fd('i', fd);
	close(fd);
}
*/
