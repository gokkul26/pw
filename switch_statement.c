//PRINT NUMBERS USING SWITCH STATEMENT
/*#include <stdio.h>
int main()
{
    int num;
    printf("\nENTER THE VALUE: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("\n NUMBER IS ONE!");
        break;
    case 2:
        printf("\n NUMBER IS TWO!");
        break;
    case 3:
        printf("\n NUMBER IS THREE!");
        break;
    case 4:
        printf("\n NUMBER IS FOUR!");
        break;
    case 5:
        printf("\n NUMBER IS FIVE!");
        break;
    default:
        printf("\n NUMBER IS NOT LISTED!");
        break;
    }
}*/

//GRADE PERFORMANCE IN SWITCH STATEMENT
/*#include <stdio.h>
int main()
{
    char grade;
    printf("\nENTER YOUR GRADE: ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'O':
        printf("\n EXCELLENT GRADE!");
        break;
    case 'A':
        printf("\n VERY GOOD GRADE!");
        break;
    case 'B':
        printf("\n GOOD GRADE!");
        break;
    case 'C':
        printf("\n AVERAGE GRADE!");
        break;
    case 'D':
        printf("\n NEED TO IMPROVE!");
        break;
    default:
        printf("\n INVALID GRADE!");
        break;
    }
}*/

#include <stdio.h>
int main()
{
    int num = 2;
    switch (num + 2)
    {
    case 1:
        printf("Case1: Value is: %d", num);
        break;
    case 2:
        printf("Case2: Value is: %d", num);
        break;
    case 3:
        printf("Case3: Value is: %d", num);
        break;
    case 4:
        printf("Case4: Value is: %d", num);
        break;
    default:
        printf("Default Value is: %d", num);
        break;
    }
    return 0;
}
