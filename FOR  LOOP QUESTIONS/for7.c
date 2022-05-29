#include <stdio.h>

int main()
{
	printf("Write a prgram in C to display the multiplication table vertically from 1 to n");
	printf("\nWe could say a number fro  1 to 8\n");
	
	int i;
	int output;
	
	for (i=1; i<=10; i++)
	{
		int numb;
		for (numb=1; numb<=8; numb++)
		{
			output = numb * i;
			printf("%d * %d = %d,   ", numb, i, output);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Let's take it a step further!\n");
	
	int j;
	int multiplicant;
	int value;
	
	printf("from 1 to 9, enter the value of the multiplicant: ");
	scanf("%d", &multiplicant);
	
	for (j=1; j<=10; j++) //Numbers from 1 to 9 that the loop will find the multiplication table for.(The number of times the loop will go)
	{
		int x;
		for (x=1; x<=multiplicant; x++) //The max value that will multiply the 'js' in the table.
		{
			value = x * j;
			printf("%d * %d = %d, ", x, j, value);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

