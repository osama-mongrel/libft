/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:41:33 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/16 07:27:59 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_helper(const char *str, int sign)
{
	unsigned long	n;
	unsigned int	d;
	int				i;

	i = 0;
	n = 0;
	while (ft_isdigit(str[i]))
	{
		d = str[i] - '0';
		if (n * 10 + d > LONG_MAX && sign == 1)
			return (-1);
		else if (n * 10 + d - 1 > LONG_MAX && sign == -1)
			return (0);
		n = n * 10 + d;
		i++;
	}
	return (sign * n);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (ft_atoi_helper((char *)str + i, sign));
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\t%d\n", ft_atoi(av[1]), atoi(av[1]));
}
*/
