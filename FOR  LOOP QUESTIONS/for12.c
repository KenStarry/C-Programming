#include <stdio.h>

int main()
{
	printf("Write a program in C to make such a pattern like right angle triangle with number increased by 1.\n");
	
	printf("\n");
	
	int i = 1;
	int rows;
	
	for (rows=1; rows<=5; rows++)
	{
		int cols;
		for (cols=1; cols<=5; cols++)
		{
			if (cols <= rows)
			{
				printf("%d ", i);
				i++;	
			}
		}
		printf("\n");
	}
}
