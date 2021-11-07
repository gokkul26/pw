#include<stdio.h>
int main()
{
    int maths= 55,science= 34,social= 66,evs =99,english=25,tamil= 45,total= 459;
    printf("\nMATHS: %d",maths>=35 && maths<=100);
    printf("\nSCIENCE: %d",science>=35 || science<=100);
    printf("\nSOCIAL: %d",social>=35 && social<=100);
    printf("\nEVS: %d",evs>=35 && evs<=100);
    printf("\nENGLISH: %d",english>=35 && english<=100);
    printf("\nTAMIL: %d",tamil>=35 && tamil<=100);
    printf("\nTOTAL: %d",!(total>=600));
}
