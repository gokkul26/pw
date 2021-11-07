#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER ANY TWO NUMBERS: \n ");
    scanf("%d%d",&a,&b);
    c= a>b?a:b;
    printf("\nGREATEST NUMBER IS %d",c);
    return 0;
}
