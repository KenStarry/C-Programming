#include <stdio.h>

int main()
{
	printf("Write a program to read a number of values in an array and display in reverse order. \n");
	
	int values[5];
	int i;
	
	for (i=0; i < 5; i++)
	{
		printf("Enter value %d: ", i);
		scanf("%d", &values[i]);
		printf("\n");
	}
	
	printf("Displaying them in reverse order: \n");
	
	for (i=4; i >= 0; i--)
	{
		printf("%d, ", values[i]);
	}
	
	return 0;
}
