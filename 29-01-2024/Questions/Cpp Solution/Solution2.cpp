#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, total = 0, i = 0;
    char str[10];
    while (1)
    {
        gets(str);
        if (str[0] == '\0')
        {
            break;
        }
        else
        {
            age = atoi(str);
        }
        if (age < 1 || age > 120)
        {
            printf("INVALID INPUT");
            return 0;
        }
        else if (age < 17)
        {
            total += 200;
        }
        else if (age <= 40)
        {
            total += 400;
        }
        else
        {
            total += 300;
        }
        i++;
        if (i == 20)
            break;
    }
    printf("Total Income %d INR", total);
}
