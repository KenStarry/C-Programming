#include <stdio.h>

int main()
{
	int row;
	int col;
	
	for(row=0; row<=5; row++)
	{
		for(col=5; col>=0; col--)
		{
			if(row==0 || col==5 || row==col)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
