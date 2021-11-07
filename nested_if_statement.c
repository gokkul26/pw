#include<stdio.h>
int main()
{
    int y;
    printf("ENTER THE YEAR: ");
    scanf("%d",&y);
    if(y%100 == 0)
    {
        if(y%400 == 0)
        {
            printf("\n %d IS A LEAP YEAR",y);
        }
        else
        {
            printf("\n %d IS NOT A LEAP YEAR",y);
        }
    }
    else
    {
        if(y%4 == 0)
        {
            printf("\n %d IS A LEAP YEAR",y);
        }
        else
        {
            printf("\n %d IS NOT A LEAP YEAR",y);
        }
    }
}
