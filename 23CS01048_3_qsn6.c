#include <stdio.h>
#include <math.h>
int main()
{
    int a, p = 1;
    printf("enter the number:");
    scanf("%d", &a);
    int sqr = a * a;
    for (int i = 1; i > 0; i++)
    {
        int q = round(pow(10, i));
        if (sqr % q + sqr / q == a)
        {
            p = 2;
            printf("kaprekar number");
        }
        else if (sqr / q == 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    if (p != 2)
    {
        printf("not kaprekar number");
    }

    return 0;
}