#include <stdio.h>
#include <math.h>

int main()
{
	int marks[2][5];
	
	int i;
	
	for(i=0; i<2; i++)
	{
		printf("Student %d:\n", (i+1));
		
		int j;
		for(j=0; j<5; j++)
		{
			printf("Enter Mark %d: \t", (j+1));
			scanf("%d", &marks[i][j]);
		}
		
		printf("\n");
	}
	
	for (i=0; i<2; i++)
	{
		printf("Student %d: \n", (i+1));
		
		int k;
		for (k=0; k<5; k++)
		{
			printf("mark %d:\t", (k+1));
			printf("%d\t", marks[i][k]);
		}
		
		printf("\n\n");
	}




	
	
	return 0;
}
