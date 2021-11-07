//A cashier has currency notes of denominates 10,50 and 100.If the amount to be withdrawn is input through the keyboard in hundreds,find the total number of currency notes of each denomination the cashier wil have to give to the withdrawer//

#include<stdio.h>
int main()
{
    int amount;
    printf("\nENTER THE AMOUNT TO WITHDRAW: ");
    scanf("%d",&amount);
    printf("\nREQUIRED NOTES OF 100'S: %d",(amount/100));
    printf("\nREQUIRED NOTES OF 50'S: %d",(amount%100/50));
    printf("\nREQUIRED NOTES OF 10'S: %d",(amount%100%50/10));
    printf("\nAMOUNT OF STILL REMAINING: %d",(amount%100%50%10));
    return 0;
}
