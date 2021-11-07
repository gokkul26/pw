//If the marks obtained by a student in five different subjects are input through the keyboard ,find out the aggregate marks and percentage marks obtained by the student in each subject is 100.//

#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float percentage;
    printf("Enter the subject marks");
    printf("\nMaths mark: ");
    scanf("%d",&m1);
    printf("\nEnglish mark: ");
    scanf("%d",&m2);
    printf("\nTamil mark: ");
    scanf("%d",&m3);
    printf("\nScience mark: ");
    scanf("%d",&m4);
    printf("\nSocial mark: ");
    scanf("%d",&m5);
    total= m1+m2+m3+m4+m5;
    percentage= total/5;
    printf("\nTotal Marks: %d",total);
    printf("\nPercentage: %0.4f",percentage);
    return 0;
}

