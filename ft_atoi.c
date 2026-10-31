/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:20:33 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/27 11:22:07 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	n;
	int		sign;

	sign = 1;
	n = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		if (n > (LONG_MAX - (*nptr - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		n = n * 10 + (*nptr++ - '0');
	}
	return ((int)(sign * n));
}
