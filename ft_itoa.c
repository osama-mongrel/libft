/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:48:23 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/28 07:26:58 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbr_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		len;
	long	nb;

	len = get_nbr_len(n);
	nb = n;
	nbr = (char *)malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr[len] = '\0';
	if (nb < 0)
	{
		nbr[0] = '-';
		nb = -nb;
	}
	while (len > 0)
	{
		len--;
		if (n < 0 && len == 0)
			return (nbr);
		nbr[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (nbr);
}
