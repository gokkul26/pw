//If a four digit number is input through the keyboard,write a program to obtain the sum of the first and last digit of this number//

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("\nENTER THE FOUR DIGIT: ");
    scanf("%d",&a);//1234
    b=a/10;//123
    c=a%10;//4
    d=b/10;//12
    e=b%10;//3
    f=d/10;//1
    g=d%10;//2
    h=c+f;
    printf("\nSUM OF FIRST AND LAST DIGITS: %d",h);
    return 0;
}
