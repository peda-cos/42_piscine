#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	len = 0;
	while (src[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (0);
	i = 0;
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
