#include <stdio.h>

int main()
{
	printf("Write a program to find the sum of all elements in an array. \n");
	
	int elements[5] = {20, 40, 60, 80, 10};
	int sum = 0;
	int i;
	
	printf("\nThe elements are: ");
	for (i=0; i<5; i++)
	{
		printf("%d, ", elements[i]);
		sum += elements[i];
	}
	
	printf("\nThe sum is: %d", sum);
	
	return 0;
}
