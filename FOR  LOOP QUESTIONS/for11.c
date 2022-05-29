#include <stdio.h>

int main()
{
	printf("Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.\n");
	
	int row;
	for (row=1; row<=5; row++)
	{
		int cols;
		for (cols=1; cols<=5; cols++)
		{
			if (cols <= row)
			{
				printf("%d", row);
			}
		}
		printf("\n");
	}
}
