#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[3], d[3];
    scanf("%s%s", s, d);
    char arr[8][3] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    float path[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    float res = 0;
    int i, st, ed;
    for (i = 0; i < 8; i++)
    {
        if (strcmp(strupr(s), arr[i]) == 0)
        {
            st = i;
        }
        if (strcmp(strupr(d), arr[i]) == 0)
        {
            ed = i;
        }
    }
    if (st == ed)
    {
        printf("INVALID INPUT");
        return 0;
    }
    else
    {
        while (st != ed)
        {
            st = (st + 1) % 8;
            res = res + path[st];
        }
        printf("%.1f INR", ceil(res / 200));
    }
}