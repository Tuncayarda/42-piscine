#include <unistd.h>

int	is_not_appear_before(char *str, char c, char max_pos)
{
	int	i;

	i = 0;
	while (i < max_pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (is_not_appear_before(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if (is_not_appear_before(av[1], av[2][j], i) && is_not_appear_before(av[2], av[2][j], j))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
