#include <stdio.h>

int main()
{
	printf("A program to display the cube of a number upto a given integer\n");
	printf("Let's print of the first 15 numbers");
	
	int i;
	int cube;
	
	for (i=1; i<=15; i++)
	{
		cube = i * i * i;
		printf("\nNumber %d: The cube is %d", i, cube);
	}
	
	printf("\n");
	
	int count;
	int j;
	int cube2;
	
	printf("Try it yourself!\n ");
	
	printf("Enter the number of numbers from 0 you want to find the cube of: ");
	scanf("%d", &count);
	
	for (j=0; j<=count; j++)
	{
		cube2 = j * j * j;
		printf("\nFor number %d, the cube is: %d", j, cube2);
	}
	
	
	
	
	
		
	return 0;
}
