#include <unistd.h>
int main(int argc, char **str)
{
    int i = 0;
    int j = 0;

if (argc == 2)
{
    while(str[1][i])
    {
        if (str[1][i] == ' ' && str[1][i+1] > ' '  && str[1][i+1] <= 126)
        {    
			j = i + 1;
		}
		i++;
    }
	while (str[1][j]&& str[1][j] > ' ' && str[1][i+1] <= 126)
	{
		write(1,&str[1][j],1);
		j++;
	}
}
write(1,"\n",1);
	return(0);
}