#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t		len;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(len); // why тут не надо size_of?
	if (!(str))
		return (0);
	while (s1)
		*str++ = *s1++;
	*str = '\0';
	return (str);
}
