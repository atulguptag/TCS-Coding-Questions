#include <stdio.h>
#include <string.h>

int main()
{
    char res[20], str[20];
    int a = 0, e = 0, i = 0, o = 0, u = 0, j = 0, k;
    scanf("%[^\n]s", str);
    if (strlen(str) > 0)
    {
        for (k = 0; k < strlen(str); k++)
        {
            if (str[k] == 'a' || str[k] == 'A')
            {
                a++;
            }
            else if (str[k] == 'e' || str[k] == 'E')
            {
                e++;
            }
            else if (str[k] == 'i' || str[k] == 'I')
            {
                i++;
            }
            else if (str[k] == 'o' || str[k] == 'O')
            {
                o++;
            }
            else if (str[k] == 'u' || str[k] == 'U')
            {
                u++;
            }
            else
            {
                if (str[i] >= '0' && str[i] <= '9')
                {
                    printf("0");
                    return 0;
                }
                else
                {
                    res[j++] = str[k];
                }
            }
        }
        res[j] = '\0';
        if (strlen(str) != strlen(res))
        {
            printf("a:%d\n", a);
            printf("e:%d\n", e);
            printf("i:%d\n", i);
            printf("o:%d\n", o);
            printf("u:%d\n", u);
            printf("%s", res);
        }
        else
        {
            printf("0");
            return 0;
        }
    }
    else
    {
        printf("INVALID INPUT");
    }
}