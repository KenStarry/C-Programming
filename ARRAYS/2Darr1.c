#include <stdio.h>
#include <math.h>

int main()
{
	printf("GETTING MARKS FOR 3 STUDENTS.\n");
	
	int marks[3][5];
	int i;
	
	for (i=0; i<3; i++)
	{
		printf("Marks for student %d:\n", (i+1));
		
		int j;
		for (j=0; j<5; j++)
		{
			printf("Enter mark %d: ", (j+1));
			scanf("%d", &marks[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
