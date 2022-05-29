#include <stdio.h>

int main()
{
	int row;
	int col;
	
	for(row=0; row<=5; row++)
	{
		for(col=0; col<=5; col++)
		{
			if(col==0 || row==5 || row==col)
			{
				printf("*");
			}
			else 
				printf(" ");
		}
		printf("\n");
	}
}
