void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*k;

	i = 0;
	k = b;
	while (len > 0)
	{
		k[i] = c;
		i++;
		len--;
	}
	return (b);
}
