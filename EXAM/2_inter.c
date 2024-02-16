#include <unistd.h>

int	is_not_before(char *str, char c, char pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i++] == c)
			return (0);
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
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (is_before(av[1], av[1][i], i) == 1)
					{
						write(1, &av[1][i], 1);
						break ;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
