#include<stdio.h>
#include<unistd.h>

void print_bits (unsigned char octet)
{
    int bit = 8;
    char bit_char;
    while(bit)
    {
        bit--;   
        bit_char = (octet >> bit & 1) +'0';
        write(1,&bit_char,1);
        
    }
}
int main (void)
{
    print_bits(1);
    return(0);
}