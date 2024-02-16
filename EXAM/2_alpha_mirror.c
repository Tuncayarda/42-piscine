#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 122 - av[1][i] + 97;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 90 - av[1][i] + 65;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
