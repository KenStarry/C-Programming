#include <stdio.h>

int main()
{
	int rows;
	int cols;
	
	for(rows=1; rows<=5; rows++)
	{
		for(cols=1; cols<=5; cols++)
		{
			if(cols<=rows)
			{
				printf("%d", cols);
			}
		}
		printf("\n");
	}
}
