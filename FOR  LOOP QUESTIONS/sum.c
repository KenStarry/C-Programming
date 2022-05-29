#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	printf("Enter a second number: ");
	scanf("%d", &b);
	
	int sum = a + b;
	printf("The sum is: %d", sum);
	
	
	
	return 0;
}
