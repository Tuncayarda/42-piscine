#include <unistd.h>

void	ft_putint(int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_putint(nb / 10);
		ft_putint(nb % 10);
	}
	else
	{
		c = nb + 48;
		write(1, &c, 1);
	} 
}

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putint(i);
		write(1, "\n", 1);
		i++;
	}
}
