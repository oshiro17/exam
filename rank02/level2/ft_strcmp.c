#include <stdio.h>
#include <string.h>

int	ft_strcmp(char	*str1, char	*str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i]-str2[i]);
}

int	main(void)
{
	char s1[10] = "aaaaaa";
	char s2[10] = "kkkkkkk";

	printf("%d\n",ft_strcmp(s1,s2));
	printf("%s\n",s1);
	printf("%s\n",s2);
}