#include <stdio.h>

int main()
{
	int row = 6;
	while (row >= 1)
	{
		int col = 1;
		while (col <= row)
		{
			if (row ==  col)
			{
				printf("*");
			}
			else
				printf(" ");
			
			col++;
		}
		printf("\n");
		row--;
	}
}
