//Temperature of a city in fahrenheit degrees is input through the keyboard.write a program to covert this temperature into centigrade degrees.//

/*#include<stdio.h>
int main()
{
    float f,c;
    printf("ENTER THE TEMPERATURE IN FAHRENHEIT: ");
    scanf("%f",&f);
    c= (f-32)*5/9;
    printf("TEMPERATUE IN CELSIUS: %0.2f",c);
    return 0;
}*/

#include<stdio.h>
int main()
{
    float f,c;
    printf("\nENTER THE TEMPERATURE IN CELSIUS: ");
    scanf("%f",&c);
    f= (c*9/5)+32;
    printf("\nTEMPERATURE IN FAHRENHEIT IS: %f",f);
    return 0;
}
