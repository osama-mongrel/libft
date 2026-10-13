/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:47:27 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/13 18:16:44 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbr_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_itoa_helper(int n, int len, char *nbr)
{
	unsigned int	nb;

	if (n < 0)
	{
		nbr[0] = '-';
		nb = (unsigned int)(-n);
	}
	else
		nb = (unsigned int)n;
	if (n == 0)
		nbr[0] = '0';
	else
	{
		while (nb > 0)
		{
			nbr[--len] = (nb % 10) + '0';
			nb /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char			*nbr;
	int				len;

	len = get_nbr_len(n);
	nbr = (char *)malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr[len] = '\0';
	ft_itoa_helper(n, len, nbr);
	return (nbr);
}
