/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-el <oben-el@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:47:27 by oben-el           #+#    #+#             */
/*   Updated: 2026/10/13 13:19:06 by oben-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_nbr_len(int	n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;
	int		is_negative;

	len = get_nbr_len(n);
	is_negative = 0;
	if (n > 0)
		is_negative = 1;
	number = (char *)malloc((len + is_negative + 1) * sizeof(char));
	number[len + is_negative] = '\0';
	
}
