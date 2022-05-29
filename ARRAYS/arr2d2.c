#include <stdio.h>

int main()
{
	int salary[2][5];
	
	int i;
	int sum = 0;
	int avg;
	
	for(i=0; i<2; i++)
	{
		int j;
		
		for(j=0; j<5; j++)
		{
			printf("Month %d: ", (j+1));
			scanf("%d", &salary[i][j]);	
			sum += salary[i][j];
		} 
		avg = sum / 5;
		
		printf("The sum is: %d", sum);
		printf("\nThe Average is: %d", avg);
		printf("\n");	
	}
}
