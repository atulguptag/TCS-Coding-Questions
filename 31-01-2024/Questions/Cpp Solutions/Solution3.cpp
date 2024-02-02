#include <stdio.h>

int main()
{
	char coffee[3][30] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};
	char tea[8][30] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};
	char soup[4][30] = {"Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"};
	char drink[3][30] = {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"};
	char ch;
	int item;

	scanf("%c\n%d", &ch, &item);
	if (ch != 'c' && ch != 'C' && ch != 't' && ch != 'T' && ch != 's' && ch != 'S' && ch != 'd' && ch != 'D')
	{
		printf("INVALID OPTION");
	}
	else if (ch == 'c' || ch == 'C')
	{
		if (item < 0 || item > 3)
		{
			printf("INVALID OPTION");
		}
		else
		{
			printf("Welcome to CCD!\n");
			printf("Enjoy Your %s!", coffee[item - 1]);
		}
	}
	else if (ch == 't' || ch == 'T')
	{
		if (item < 0 || item > 8)
		{
			printf("INVALID OPTION");
		}
		else
		{
			printf("Welcome to CCD!\n");
			printf("Enjoy Your %s!", tea[item - 1]);
		}
	}
	else if (ch == 's' || ch == 'S')
	{
		if (item < 0 || item > 4)
		{
			printf("INVALID OPTION");
		}
		else
		{
			printf("Welcome to CCD!\n");
			printf("Enjoy Your %s!", soup[item - 1]);
		}
	}
	else if (ch == 'd' || ch == 'D')
	{
		if (item < 0 || item > 4)
		{
			printf("INVALID OPTION");
		}
		else
		{
			printf("Welcome to CCD!\n");
			printf("Enjoy Your %s!", drink[item - 1]);
		}
	}
}