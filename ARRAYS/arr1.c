#include <stdio.h>
#include <math.h>

int main()
{
	printf("GETTING STUDENT MARKS!\n");
	
	int marks[5];
	int i;
	
	for (i=0; i< 5; i++)
	{
		printf("Enter mark %d: ", (i+1));
		scanf("%d", &marks[i]);
	}
	
	printf("The marks are as follows: \n");
	int j;
	
	for (j=0; j<5; j++)
	{
		printf("%d, ", marks[j]);
	}
	
	
	
	
	
	return 0;
}
