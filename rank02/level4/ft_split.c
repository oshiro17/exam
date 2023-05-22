#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	int j = 0;

	while (s2 && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

char	**ft_split(char *c)
{
	int i = 0;
	int k = 0;
	int j = 0;
	char **rec;
	int wc = 0;

	while (c[i])
	{
		while(c[i] && (c[i] == '\t' || c[i] == '\n' || c[i] ==' '))
			i++;
		if (c[i] && c[i] != '\t' && c[i] != '\n' && c[i] != ' ')
			wc++;
		while(c[i] && c[i] != '\t' && c[i] != '\n' && c[i] != ' ')	
			i++;
	}
	rec = (char **)malloc(sizeof(char *) * (wc + 1));
	rec[wc] = NULL;
	i = 0;
	while(c[i])
	{
		while(c[i] && (c[i] == '\t' || c[i] == '\n' || c[i] ==' '))
			i++;
		j = i;
		while(c[i] && c[i] != '\t' && c[i] != '\n' && c[i] != ' ')	
			i++;
		if (i > j)
		{
			rec[k] = (char *)malloc((i - j) + 1);
			ft_strncpy(rec[k],&c[j], i- j);
			k++;
		}
	}
	return(rec);
}

int	main(void)
{
	char c[40] = "asd dljfl sdlkjlkds sdlfjl";
	char **k;

	k = ft_split(c);

	int i = 0;

	while(k[i])
	{
		printf("%s\n",k[i]);
		i++;
	}
	return (0);
}