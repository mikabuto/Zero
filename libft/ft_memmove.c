#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;
  
	dest = dst;
	sorc = src;
	while (len > 0)
	{
		*dest++ = *sorc++;
		len--;
	}
	return (dst);
}

int main()
{
	char    lol[] = "madamada";
	char    lolo[] = "1234567890";

	ft_memmove(lol + 2, lolo + 4, 2);
	printf("%s = ", lol);
	memmove(lol + 2, lolo + 4, 2);
	printf("%s;", lol);
	return (0);
}
