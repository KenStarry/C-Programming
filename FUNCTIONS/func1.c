#include <stdio.h>
#include <math.h>

int square(int x)
{
	x *= x;
}
 

int main()
{
	
	int a = 5;
	
	printf("Finding the square of a: \n");
	printf("%d", square(a));
	
	return 0;
}
