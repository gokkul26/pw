#include<stdio.h>
int main()
{
    char name[10];
    int age;
    printf("\nENTER THE NAME: ");
    scanf("%s",name);
    printf("\nENTER THE AGE: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n %s Age is %d Eligible for Driving!",name,age);
        printf("\n DRIVE SAFELY!");
    }
    else
    {
        printf("\n %s Age is %d Not Eligible for Driving!",name,age);
        printf("\n Eligible Age Range is >=18!");
        printf("\n THANK YOU!");
    }
    return 0;
}
