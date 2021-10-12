// #include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	if (len == 0)
		return (0);
	while (big[a] && len--)
	{
		c = a;
		while (big[c] == little[b])
		{
			c++;
			b++;
			if (little[b] == '\0')
				return ((char *)&big[a]);
		}
		a++;
		b = 0;
	}
	return (0);
}

int main()
{
	int	i = 0;
	const char *big = "wow, are you ok, dude?";
	const char *little = "w, ";

	while (i < 6)
	{
		printf("%s = ",ft_strnstr(big, little, i));
		printf("%s\n",strnstr(big, little, i));
		i++;
	}
	return (0);
}