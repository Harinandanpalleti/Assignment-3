#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    printf("\n");
    if (num > 0)
    {
        printf("input is a positive number.");
    }
    else if (num == 0)
    {
        printf(" input  is equal to 0. ");
    }
    else
    {
        printf(" input is  a negative number. ");
    }

    return 0;
}