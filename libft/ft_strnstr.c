// #include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (!little)
		return ((char *)big);
	while (len-- && big[a])
	{
		a++;
		b = 0;
		while (big[a] == little[b])
		{
			b++;
			a++;
			if (little[b] == '\0')
				return ((char *)big);
		}
	}
	return (0);
}

int main()
{
	const char *big = "wow, are you ok, dude?";
	const char *little = "wow, are you ok, dude?";

	printf("%s\n",ft_strnstr(big, little, 1));
	printf("%s\n",strnstr(big, little, 1));
	return (0);
}