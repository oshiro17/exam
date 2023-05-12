#include <string.h>
#include <stdio.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	size_t	j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break ;
			j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;

	}
	return (i);
}

int	main(void)
{
	char a[10] = "sdd";
	char y[10] = "aas";

	printf("%lu\n",strspn(y,a));
	printf("%lu\n",ft_strspn(y,a));
}