#include <stdio.h>

int main() 
{
	printf("Write a C program to display a right-angled triangle using asteriks (*)\n");
	
	//We need 4 columns and 4 rows
	
	int rows;
	
	for (rows = 1; rows <= 4; rows++) //Define that the program should run 4 times to represent 4rows
	{
		int cols;
		for (cols = 1; cols <= 4; cols++) //Define that the program should run 4 times to represent 4columns
		{
			if(cols <= rows)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
