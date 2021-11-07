//Ramesh's basic salary is input through the keyboard.His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.write a program to calculate his gross salary.//

#include<stdio.h>
int main()    
{
    float bs,da,hra,gs;
    printf("\nEnter the Basic Salary: ");
    scanf("%f",&bs);
    da= bs*0.4;
    hra= bs*0.2;
    gs= bs+da+hra;
    printf("\nBasic salary:%0.2f",bs);
    printf("\nDEARNESS ALLOWANCE:%0.2f",da);
    printf("\nHOUSE RENT ALLOWANCE:%0.2f",hra);
    printf("\nGROSS PAY:%0.2f",gs);
    return 0;
}

