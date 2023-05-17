#include <stdio.h>
#include <unistd.h>

void s_print(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + ('a' - 'A');
    write(1, &c, 1);
}
void big_print(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - ('a' - 'A');
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    // int k = 0;

    if (argc != 1)
    {
        while(argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                if (argv[i][j] == ' ' || argv[i][j] == 11)
                    write(1, " ", 1);
                else if (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0' || argv[i][j + 1] == 11)
                    big_print(argv[i][j]);
                else
                    s_print(argv[i][j]);
                j++;
            }
            i++;
        }   
    }
    write(1,"\n", 1);
}