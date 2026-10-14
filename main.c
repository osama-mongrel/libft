#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	int	fd = open("test.txt", O_WRONLY);
	ft_putnbr_fd(atoi(av[1]), fd);
	close(fd);
}
