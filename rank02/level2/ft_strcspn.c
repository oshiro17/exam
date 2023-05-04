#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i ++;
	}
	return(i);

}

int	main(void)
{
	char s1[20] = "aaaaacaa";
	char s2[20] = "b";

	printf("%lu\n",ft_strcspn(s1,s2));
	return(0);
}