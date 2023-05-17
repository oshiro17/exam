#include <stdio.h>
unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int i = 1;
    
    if (a == 0 || b == 0)
        return (0);
    while (1)
    {
        if (i % a == 0 && i % b == 0)
            break;
        i++;
    }
    return(i);
}
int main() {
    unsigned int num1, num2;

    printf("Enter the first number: ");
    scanf("%u", &num1);

    printf("Enter the second number: ");
    scanf("%u", &num2);

    unsigned int result = lcm(num1, num2);
    printf("LCM of %u and %u is: %u\n", num1, num2, result);

    return 0;
}