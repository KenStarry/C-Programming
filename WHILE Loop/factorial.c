#include <stdio.h>

int main() {
	
	int x;
	
	printf("Enter a value to get the factorial: ");
	scanf("%d", &x);
	
	int factorial = 1;
	
	while(x > 0) {
		factorial = factorial * x;
		x--;
	}
	
	printf("The factorial of %d is \n", x);
	printf("%d", factorial);
}
