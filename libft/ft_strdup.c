#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t		len;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(len * sizeof(s1)); // мб тут не надо size_of, так как я присваиваю чар?
	if (!(str))
		return (0);
	while (s1)
		*str++ = *s1++;
	*str = '\0';
	return (str);
}
