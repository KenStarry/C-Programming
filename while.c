#include <stdio.h>

int main() {
	int x = 1;
	int y;
	
	printf("Enter a number: ");
	scanf("%d", &y);
	
	while (x <= y) {
		printf(" %d", x);
		x += 2;
	}
	
	return 0;
}
