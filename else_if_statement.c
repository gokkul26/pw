#include<stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d IS A POSITIVE NUMBER!",a);
    }
    else if(a<0)
    {
        printf("%d IS A NEGATIVE NUMBER!",a);
    }
    else if(a==0)
    {
        printf("THE GIVEN NUMBER IS ZERO!",a);
    }
    return 0;
}
