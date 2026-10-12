#include <stdio.h>
#include "libft.h"

int	main()
{
	char str[] = "hello123\t";
	char s[20];
	s[19] = '\0';
	ft_memmove((void *)s, (void *)str, 6);
	printf("%s\n", s);
}
