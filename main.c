#include <stdio.h>
#include "libft.h"

int	main()
{
	printf("%s\n", ft_itoa(-981));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(INT_MAX));
}
