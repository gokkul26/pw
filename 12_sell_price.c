//If the total selling price of 15 items and the total profit earned on them is input through the keyboard,write a program to find the cost price of one item.//

#include<stdio.h>
int main()
{
    int sell_price,profit,brought_price,cost_price;
    printf("\nENTER THE SELLING PRICE FOR 15 ITEMS AND PROFIT PRICE: ");
    printf("\nSELLING PRICE: ");
    scanf("%d",&sell_price);
    printf("\nPROFIT: ");
    scanf("%d",&profit);
    brought_price= sell_price-profit;
    cost_price= (brought_price/15);
    printf("\nCOST PRICE FOR 15 ITEMS: %d",brought_price);
    printf("\n\nCOST PRICE FOR ONE ITEM IS: %d",cost_price);
    return 0;
}

