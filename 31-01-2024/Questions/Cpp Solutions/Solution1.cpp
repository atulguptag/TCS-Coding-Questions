#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	int length = 0, count = 0, i;
	scanf("%s\n", str);
	while ((strcmp(str, "q") != 0) && (strcmp(str, "Q") != 0))
	{
		length += 1;
		if (strlen(str) == 10)
		{
			for (i = 0; i < strlen(str); i++)
			{
				if (!(str[i] >= '0' && str[i] <= '9'))
				{
					count += 1;
					break;
				}
			}
		}
		else if (strlen(str) > 10)
		{
			count += 1;
		}
		scanf("%s\n", str);
	}
	if (length == 5)
	{
		printf("%d", count);
	}
	else
	{
		printf("INPUT LIMIT IS 5");
	}
}