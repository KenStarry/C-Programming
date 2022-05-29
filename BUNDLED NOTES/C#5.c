#include <stdio.h>

int main()
{
	int x;
	int fact = 1;
	
	printf("Enter an integer: ");
	scanf("%d", &x);

	
	for (; x>0; x--)
	{
		fact *= x;
	}
	
	printf("The factorial is %d: ", fact);
}
