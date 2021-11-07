//The length & breadth of a rectangle and radius of a circle are input through the keyboard.write a program to calculate the area & perimeter of the rectangle,and the area & circumference of the circle//

#include<stdio.h>
int main()
{
    float l,b,r,AREA,PERIMETER,Area,Perimeter,CIRCUMFERENCE;
    printf("\nENTER THE LENGTH AND BREADTH FOR RECTANGLE: ");
    printf("\nEnter the Length: ");
    scanf("%f",&l);
    printf("\nEnter the Breadth: ");
    scanf("%f",&b);
    printf("\nENTER THE RADIUS FOR CIRCLE: ");
    printf("\nEnter the radius: ");
    scanf("%f",&r);
    AREA= l*b;
    PERIMETER= 2*(l+b);
    Area= 3.14*r*r;
    CIRCUMFERENCE= 2*3.14*r;
    printf("\nAREA OF RECTANGALE: %0.2f",AREA);
    printf("\nPERIMETER OF RECTANGLE: %0.2f",PERIMETER);
    printf("\nAREA OF CIRCLE: %0.2f",Area);
    printf("\nCIRCUMFERENCE OF CIRCLE: %0.2f",CIRCUMFERENCE);
    return 0;
}



