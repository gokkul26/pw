#include<stdio.h>
int main()
{
    int x,y;
    printf("\nENTER THE VALUE OF x:");
    scanf("%d",&x);
    printf("\nENTER THE VALUE OF y:");
    scanf("%d",&y);
    x+=y;//x=x+y
    printf("\nX+=Y: %d",x);
    x-=y;//x=x-y
    printf("\nX-=Y: %d",x);
    x*=y;//x=x*y
    printf("\nX*=Y: %d",x);
    x/=y;//x=x/y
    printf("\nX/=Y: %d",x);
    x%=y;//x=x%y
    printf("\nX%=Y: %d",x);
    return 0;
}

/*#include<stdio.h>
int main() 
{
    int x=10,y=5;
    x+=y;
    printf("\nX= %d",x);
    return 0;
}*/
