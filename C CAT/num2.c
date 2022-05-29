#include <stdio.h>

int main()
{
	int i;
	int frst = 0;
	int scnd = 1;
	
	printf("%d %d ", frst, scnd);
	
	for (i=0; i < 13; i++)
	{
		int third = frst + scnd;
		printf("%d ", third);
		frst = scnd;
		scnd = third;
	}
	
	return 0;
}
