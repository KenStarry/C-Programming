#include <stdio.h>

int main()
{
	printf("Write a program in C to display the pattern like right-angled triangle with consecutive numbers as the rows increase\n");
	
	int row;
	for (row=1; row<=5; row++)
	{
		int cols;
		for (cols=1; cols<=5; cols++)
		{
			if (cols <= row)
			{
				printf("%d", cols);
			}
		}
		printf("\n");
	}
	
	return 0;
}
