#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;

    if (argc == 3)
    {
        while(argv[1][i])
        {
            j = 0;
            while(argv[2][j])
            {
                
                if (argv[1][i] == argv[2][j])
                {
                    k = 0;
                    while(i > k)
                    {
                        if (argv[1][i] ==  argv[1][k])
                            break;
                        k++;
                    }
                    if (k == i)
                    {
                        write(1,&argv[1][i],1);
                        break;
                    }
                }
                j++;
            }
            i++;
        }
    }
        write(1, "\n" , 1);
}