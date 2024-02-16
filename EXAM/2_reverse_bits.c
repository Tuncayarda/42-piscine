unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	new;

	i = 8;
	while (i--)
	{
		new = (new << 1) | (octet & 1);
		octet >>= 1;
	}
	return new;
}
