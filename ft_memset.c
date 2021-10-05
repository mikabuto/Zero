#include <stdio.h>
#include <string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	unsigned char	*k;

	i = 0;
	while (i < len)
	{
		b[i] = c;
		i++;
	}

	return (b);
}



int	main(void)
{
	char len[10];

	len[0] = 'a';
	len[1] = 'b';
	len[2] = 'c';
	len[3] = 'd';
	len[4] = 'e';
	len[5] = 'f';
	len[6] = '\0';
	memset(len, 'a', 6);
	printf("%s", len);
	return (0);
}
