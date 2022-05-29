#include <stdio.h>

int main()
{
	int a = 10;
	int b = a++ + 2;
	printf("a = %d", a);
	printf("\t b = %d", ++b);
	
	return 0;
}
