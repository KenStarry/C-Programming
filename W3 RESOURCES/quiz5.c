#include <stdio.h>

int main() {
	
	int num;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	if(num % 3 == 0) {
		printf("That's a multiple of 3");
	}
	else if(num % 7 == 0) {
		printf("That's a multiple of 7");
	}
	else if(num % 3 == 0 && num%7 == 0)
	    printf("That's a multiple of 3 and 7");
	else 
	    printf("Try another number");
	
	return 0;
}
