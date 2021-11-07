//In a town,the percentage of men is 52.The percentage of total literacy is 48,if total percentage of literate men is 35 of the total population,write a program to find the total number of illiterate men and women if the population of the town is 80,000.//

#include<stdio.h>
int main()
{
    int pop,pop_men,men_lit,pop_women,total_lit,women_lit,total_men_women_lit,total_num_illiterate,men_illiterate,women_illiterate;
    printf("\nENTER THE TOTAL NUMBER OF POPULATION: ");
    scanf("%d",&pop);
    pop_men= (52*pop)/100;
    men_lit= (35*pop_men)/100;
    pop_women= pop-pop_men;
    total_lit= (48*pop)/100;
    women_lit= total_lit - men_lit;
    total_men_women_lit= men_lit + women_lit;
    men_illiterate= pop_men-men_lit;
    women_illiterate= pop_women-women_lit;
    total_num_illiterate= pop - total_men_women_lit;
    printf("\nTOTAL NO OF POPULATION IN MEN: %d",pop_men);
    printf("\nTOTAL NO OF POPULATION IN WOMEN: %d",pop_women);
    printf("\nTOTAL NO OF LITERATE IN MEN: %d",men_lit);
    printf("\nTOTAL NO OF LITERATE IN WOMEN: %d",women_lit);
    printf("\nTOTAL NO OF LITERATE IN MEN AND WOMEN: %d",total_men_women_lit);
    printf("\nTOTAL NO OF ILLITERATE IN MEN: %d",men_illiterate);
    printf("\nTOTAL NO OF ILLITERATE IN WOMEN: %d",women_illiterate);
    printf("\nTOTAL NO OF ILLITERATE MEN AND WOMEN IS: %d",total_num_illiterate);
    return 0;
}
