/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:22:29 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 16:42:00 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	int fd = open("test3.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);	
	if (fd == -1)
		printf("error");
	ft_putnbr_fd(ft_atoi(av[1]), fd);
	close(fd);
}
*/
