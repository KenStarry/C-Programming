#include <stdio.h>

int main() {
	printf("Hello guys");
	
	int x = 13;
	int y = 15;
	int z = x++ + y++;
	
	printf("%d \n", x);
	printf("%d", y);
	printf("%d", z);
	
	return 0;
}
