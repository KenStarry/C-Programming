#include <stdio.h>

int main()
{
	printf("Displaying multiplication table of a number from 0 to 10");
	
	int numb = 7;
	int value;
	int i;
	
	for (i=0; i<=10; i++)
	{
		value = numb * i;
		printf("\n7 * %d = %d", i, value);
	}
	
	printf("\n");
	printf("Let's take it a step further:\n");
	
	int j;
	int userNumb;
	int table;
	
	printf("Enter the number you would like to find the multiplication table of: ");
	scanf("%d", &userNumb);
	
	for (j=0; j<=10; j++)
	{
		table = userNumb * j;
		printf("\n%d * %d = %d", userNumb, j, table);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
