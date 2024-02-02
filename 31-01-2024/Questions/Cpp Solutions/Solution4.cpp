#include <stdio.h>
#include <string.h>

int main()
{
	char parent[20], ch, child[20], res[20], names[20][20];
	int count1 = 0, count2 = 0, i;
	scanf("%s\n%c\n", parent, &ch);
	if (ch == 'N')
	{
		printf("TOTAL MEMBERS:1\n");
		printf("COMMISSION DETAILS\n");
		printf("%s:250 INR", parent);
	}
	else
	{
		scanf("%[^\n]s", child);
		for (i = 0; i < strlen(child); i++)
		{
			if (child[i] == ',')
			{
				strcpy(names[count2], res);
				count2++;
				res[0] = NULL;
				count1 = 0;
			}
			else
			{
				res[count1++] = child[i];
			}
		}
		strcpy(names[count2], res);
		count2++;
		printf("TOTAL MEMBERS:%d\n", count2 + 1);
		printf("COMMISSION DETAILS\n");
		printf("%s:%d INR\n", parent, count2 * 500);
		for (i = 0; i < count2; i++)
		{
			printf("%s:250 INR\n", names[i]);
		}
	}
}