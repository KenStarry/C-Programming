#include <stdio.h>

int main() 
{
	printf("A program to display the n terms of odd numbers and their sum");
	
	printf("\nLet's find the first 20 odd numbers and their sum below\n");
	
	int i;
	int sum = 0;
	
	for (i=1; i<=20; i++)
	{
		printf("%d ", 2 * i - 1);
		sum += 2 * i - 1;
	}
	printf("\nTheir total sum is: %d", sum);
	
	
	
	
	
	
	
	
	
	return 0;
}
