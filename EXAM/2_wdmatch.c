#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	i = 0;
	len = 0;
	if (ac == 3)
	{
		while (av[1][len])
			len++;
		while (av[2][i] && j < len)
		{
			if (av[2][i] == av[1][j])
			{
				j++;
			}
			i++;
		}
		if (j == len)
			write(1, av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
