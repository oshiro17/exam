#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i ;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char s1[4] = "abcd";

	// strcpy(s1, "poiiiu\0");
	printf("%s\n",ft_strcpy(s1, "pu"));
	printf("%s\n",s1);
}