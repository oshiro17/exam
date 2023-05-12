#include<stdio.h>
#include <stdio.h>
unsigned char reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;
    while (i > 0)
    {
        res = res * 2 +(octet % 2);
        octet = octet / 2;
        i--;
    }
    return(res);
}
unsigned char reverse_bits(unsigned char octet);

int main(void) {
    unsigned char octet = 97;  // 0b01100001
    unsigned char reversed = reverse_bits(octet);
    printf("Original: %d (0x%x) (0b", octet, octet);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (octet >> i) & 1);
    }
    printf(")\nReversed: %d (0x%x) (0b", reversed, reversed);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (reversed >> i) & 1);
    }
    printf(")\n");
    return 0;
}