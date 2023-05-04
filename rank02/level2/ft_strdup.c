#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		i;
	char	*d;

	i = 0;
	while (src[i])
		i++;
	d = malloc((i + 1));
	i = 0;
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int	main(void)
{
	char s[10] = "aaaa";

	printf("%s\n", ft_strdup(s));
}