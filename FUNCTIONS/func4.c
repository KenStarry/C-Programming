#include <stdio.h>

int  sum(int x, int y)
{
	int sum = x + y;
	
	return sum;
}

int main()
{
	int a;
	int b;
	
	printf("Enter value 1: ");
	scanf("%d", &a);
	
	printf("Enter value 2: ");
	scanf("%d", &b);
	
	printf("The sum = %d", sum(a, b));
}
