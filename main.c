#include <stdio.h>
#include "libft.h"

int	main()
{
	char str[] = "hello123\t";
	char s[20];
	s[19] = '\0';
	ft_memcpy((void *)s, (void *)str, 7);
	printf("%s\n", s);
}
