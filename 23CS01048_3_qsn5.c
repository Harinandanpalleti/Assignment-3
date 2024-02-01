#include <stdio.h>
#include <math.h>
int main()
{
    int a, fine;
    printf("enter number of days late:");
    scanf("%d", &a);
    if (a <= 5)
    {
        printf("you have been imposed a fine for late submission of the book\n");
        fine = a;
        printf("Fine: %d", fine);
    }
    else if (5 < a && a < 11)
    {
        printf("you have been imposed a fine for late submission of the book\n");
        fine = 5 + 2 * (a - 5);
        printf("Fine: %d", fine);
    }
    else if (10 < a && a < 31)
    {
        printf("you have been imposed a fine for late submission of the book\n");
        fine = 15 + 5 * (a - 10);
        printf("Fine: %d", fine);
    }
    else
    {
        printf("you have exceeded the limit for late submission of the book \n your subscription has been cancelled.");
    }

    return 0;
}