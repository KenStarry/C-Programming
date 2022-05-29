#include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	
	for(i=0; i<=10; i++)
	{
		
		if(i % 2 == 0)
		{
			printf("%d ", i);
			sum += i;
		}
		else
			printf(" ");
	}
	
	printf("\nThe sum is: %d", sum);
	
	return 0;
}
