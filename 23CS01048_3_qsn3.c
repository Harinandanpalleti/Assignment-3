#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter sides of triangle :");
    scanf(" %d %d %d", &a,&b,&c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("they form a triangle");
    }
    else
    {
        printf("they dont form a triangle. ");
    }
    

    return 0;
}