//Two numbers are input through the keyboard into two location C and D.Write a program to interchange the contents of C and D.//

#include<stdio.h>
int main()
{
    int c,d,b;
    printf("\nENTER ANY TWO NUMBERS: ");
    scanf("%d %d",&c,&d);
    printf("\nNUMBER BEFORE SWAPPING");
    printf("\n C: %d  D: %d",c,d);
    b=c;
    c=d;
    d=b;
    printf("\nNUMBERS AFTER SWAPPING");
    printf("\n C: %d  D: %d",c,d);
    return 0;
}
