#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("enter first point :");
    scanf("%d %d", &x1, &y1);
    printf("\nenter second point :");
    scanf("%d %d", &x2, &y2);
    printf("\nenter third point :");
    scanf("%d %d", &x3, &y3);
    if ((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) == 0)
    {
        printf("the three points are collinear.");
    }
    else
    {
        printf("the three point are not collinear .");
    }

    return 0;
}