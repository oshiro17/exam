#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j = 0;

	while (s1[j])
	{
		j++;
		while (s2[i])
		{
			if (s1[j] == s2[i])
				return (s1[i]);
			i++;
		}
	}
	return (NULL);
}