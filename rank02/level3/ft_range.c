  #include <stdlib.h>

int	*ft_range(int	start, int	end);
{
	int	*res;
	int i = 0;

	if (end <= start)
		return(NULL);
	res = malloc(sizeof(int) * (end - startqqwq:wq));
	while (end < start)
	{
		res[i] = end;
		end++;
		i++;
	}
	return(res);
}
