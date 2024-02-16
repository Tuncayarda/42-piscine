#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	ct;

	ct = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				ct = av[1][i] - 'a' + 1;
				while (ct--)
					write(1, &av[1][i], 1);
			}
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				ct = av[1][i] - 'A' + 1;
				while (ct--)
					write(1, &av[1][i], 1);
			}
			ct = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
