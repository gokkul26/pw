#include<stdio.h>
int main()
{
    char name [5];
    int age;
    printf("\nENTER THE YOUR NAME: ");
    scanf("%s",name);
    printf("\nENTER THE YOUR AGE: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n %s AGE IS %d ELIGIBLE FOR DRIVING!",name,age);
    }
    return 0;
}
