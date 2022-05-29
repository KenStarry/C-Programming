#include <stdio.h>

int main()
{
	int first = 0;
	int second = 1;
	int next;
	int i;
	
	printf("%d %d ", first, second);
	
	for(i=1; i<=15; i++)
	{
		next = first + second;
		printf("%d ", next);
		first = second;
		second = next;
	}
}
