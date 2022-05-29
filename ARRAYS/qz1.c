#include <stdio.h>

int main()
{
	printf("Write a program to store elements from the user in an array and print it. \n");
	
	int marks[5];
	int count;
	
	for (count = 0; count < 5; count++)
	{
		printf("Enter mark %d: ", count);
		scanf("%d", &marks[count]);
		printf("\n");
	}
	
	printf("\nThe final marks are: ");
	for (count=0; count < 5; count++)
	{
		printf("%d, ", marks[count]);
	}
	
	return 0;
}
