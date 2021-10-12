#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t		len;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(len * sizeof(s1));
	if (!(str))
		return (0);
	ft_memcpy(str, s1, len);
	return (str);
}
