#include <stdio.h>

int main()
{
    int ni, ne, i;
    float temp, cost = 0.0, cpi = 18, cpe = 12;
    scanf("%d %d", &ni, &ne); // 6 3
    for (i = 0; i < ni; i++)
    {
        scanf("%f", &temp); // 12.3,15.2..
        cost = cost + temp * cpi;
    }
    for (i = 0; i < ne; i++)
    {
        scanf("%f", &temp); // 10.10,10.00..
        cost = cost + temp * cpe;
    }
    printf("Total estimated Cost:%.1f INR", cost);
}