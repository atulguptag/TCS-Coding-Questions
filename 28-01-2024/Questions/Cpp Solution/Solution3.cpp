#include <stdio.h>

int main()
{
	int b, m, filled = 0, count = 0, flag = 1, temp;
	float mn_cap;
	scanf("%d\n%d\n", &b, &m);
	mn_cap = b * 0.80;
	if (m > b)
	{
		flag = 0;
	}
	else
	{
		while (filled < mn_cap)
		{
			scanf("%d\n", &temp);
			if (temp > m || temp < 0)
			{
				flag = 0;
				break;
			}
			else
			{
				filled += temp;
				count += 1;
			}
		}
	}
	
	if (flag == 0)
	{
		printf("INVALID INPUT");
	}
	else
	{
		printf("BUCKET FULL\nNUMBER OF MUGS:%d", count);
	}
}