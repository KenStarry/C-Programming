#include <stdio.h>

int main()
{
	int marks[3][5];
	int i;
	
	for (i=0; i<3; i++)
	{
		int sum = 0;
		/*printf("Enter marks for student %d\n", (i+1));*/
		
		int j;
		for (j=0; j<5; j++)
		{
			/*printf("Mark %d ", (j+1));
			scanf("%d", &marks[i][j]);*/
			sum += marks[i][j];
		}
		
		double mean = sum/5.0;
		printf("The sum is: %d", sum);
		printf("\nThe mean is: %lf", mean);
		
		printf("\n\n");
	}
	
	return 0;
}
