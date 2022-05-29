#include <stdio.h>

int main()
{
	int marks[2][5];
	
	int i;
	for(i=0; i<2; i++)
	{
		int j;
		for(j=0; j<5; j++)
		{
			printf("Enter mark %d: ", (j+1));
			scanf("%d", &marks[i][j]);
		}
		
		int k;
		for(k=0; k<5; k++)
		{
			printf("%d ", marks[i][k]);
		}
		
		printf("\n");
	}
}
