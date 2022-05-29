#include <stdio.h>

int main()
{
	int row;
	int col;
	
	for(row=1; row<=5; row++)
	{
		for(col=5; col>=1; col--)
		{
			if(col<=row)
			{
				printf("%d", col);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
