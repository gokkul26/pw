#include<stdio.h>
int main()
{
    int a=10,b=11;
    printf("\nBITWISE AND : %d",a&b);
    printf("\nBITWISE OR : %d",a|b);
    printf("\nBITWISE XOR : %d",a^b);
    printf("\nBITWISE NOT: %d",~b);
    int x=14,y,z;
    y=x<<2;
    z=x>>2;
    printf("\nLEFT SHIFT : %d",y);
    printf("\nRIGHT SHIFT : %d",z);
}
