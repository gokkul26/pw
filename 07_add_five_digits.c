//If a five digit number is input through the keyboard,write a program to calculate the sum of its digits//

/*#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,sum=0;
    printf("\nENTER FIVE DIGIT NUMBER: ");
    scanf("%d",&a);//12345
    b= a/10;//1234
    c= a%10;//5
    sum+=c;//sum=sum+c
    d= b/10;//123
    e= b%10;//4
    sum+=e;//sum=sum+e
    f= d/10;//12
    g= d%10;//3
    sum+=g;//sum=sum+g
    h= f/10;//1
    sum+=h;//sum=sum+h
    i= f%10;//2
    sum+=i;//sum=sum+i
    printf("\nSUM OF FIVE DIGITS: %d",sum);
    return 0;
}*/


#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,sum;
    printf("\nENTER FIVE DIGIT NUMBER: ");
    scanf("%d",&a);//12345
    b= a/10;//1234
    c= a%10;//5
    d= b/10;//123
    e= b%10;//4
    f= d/10;//12
    g= d%10;//3
    h= f/10;//1
    i= f%10;//2
    sum=c+e+g+h+i;
    printf("\nSUM OF FIVE DIGITS: %d",sum);
    return 0;
}
