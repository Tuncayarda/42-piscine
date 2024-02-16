int is_power_of_2(unsigned int n)
{
	int mult;

	mult = 1;
	while (mult <= n)
	{
		if (mult == n)
			return (1);
		mult = mult * 2;
	}
	return (0);
}
