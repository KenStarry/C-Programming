#include <stdio.h>

int main() {
	
	printf("Creating a program that reads an integer from the user and displays a factorial\nof the new integer.");
	
	int x;
	int fact = 1;
	printf("Enter a value: ");
	scanf("%d", &x);
	
	while(x > 0) {
		fact *= x;
		x--;
	}
	
	printf("The factorial is = %d", fact);
	
	
	int num;
	printf("Enter a number less than 20: \n");
	scanf("%d", &num);
	
	while(num <= 20) {
		printf("\nThe number is: %d\n", num);
		num++;
		
		if(num > 20) {
		printf("That was too big of a number!");
	}
	}
	return 0;
}
