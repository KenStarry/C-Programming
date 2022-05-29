#include <stdio.h>

int main() {
	int x = 10;
	int y = ++x;
	int z = x;
	
	printf("PRE-INCREMENT\n");
	printf("\nx = %d", x);
	printf("\ny = %d", y);
	printf("\nz = %d", z);
	
	return 0;
}
