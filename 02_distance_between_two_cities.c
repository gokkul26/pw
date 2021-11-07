//The distance between two cities (in km)is input through the keyboard,write a program to convert and print this distance in meters,feet,inches and centimeters.//

#include<stdio.h> 
int main()
{
    float km,m,feet,inch,cm;
    printf("\nEnter the Distance between CHE to KUM in km: ");
    scanf("%f",&km);// km =10
    m= km*1000; // m = 10*1000 => m = 10000
    cm= m*100; // 10000*100 => cm = 1000000
    inch= cm/2.54;// inch = 1000000/2.54 => inch =3,93,700.78 
    feet= inch/12; // feet = 3,93,700.78/12 => feet = 32,808.39
    printf("\nDistance between CHE to KUM in m: %0.1f",m);
    printf("\nDistance between CHE to KUM in cm: %0.1f",cm);
    printf("\nDistance between CHE to KUM in inch: %0.1f",inch);
    printf("\nDistance between CHE to KUM in feet: %0.1f",feet);
    return 0;   
}
