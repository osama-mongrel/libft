#include <stdio.h>
#include "libft.h"

int	main()
{
	char str[] = "hello123\t";
	printf("%c\t%d\n", str[1], ft_isprint(str[1]));
	printf("%c\t%d\n", str[8], ft_isprint(str[8]));
}
