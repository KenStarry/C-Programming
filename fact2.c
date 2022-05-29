#include <stdio.h>

int main()
{
	int x;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	int fact = 1;
	
	for(; x > 0; x--)
	{
		fact *= x;
	}
	
	printf("The factorial is: %d", fact);
}
