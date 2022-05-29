#include <stdio.h>

int main() {
	
	printf("A leap year is divisible by 400 and not divisible by 100 or is divisible by 4.\n");
	printf("Write a program that willread year from the keyboard and check if its a leap year or not\n");
	
	printf("\n");
	
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	if (year%400 == 0 && year%100 != 0 || year%4 == 0) {
		printf("%d is a leap year", year);
	}
	else
		printf("%d is not a leap year!", year);
		
		
	printf("\n");
	printf("Program that reads an integer from the user, calculates and display factorial of that integer.\n");
	
	int numb;
	printf("Enter a number: ");
	scanf("%d", &numb);
	
	int factorial = 1;
	while(numb > 0) {
		
		factorial*= numb;
		numb--;
	}
	printf("factorial is: %d\n", factorial);
	
	
	
	
	printf("\n");
	printf("Program to calculate the sum of numbers between 0 and 10\n");
	
	int nums;
	int sum = 0;
	for(nums = 0; nums <= 10; nums++) {
		printf("%d ", nums);
		sum += nums;
	}
	printf("\nThe sum is: %d", sum);
	
	
	
	printf("\n");
	printf("Program to calculate the sum of even numbers between 0 and 10\n");
	
	int even;
	int sum2 = 0;
	for(even = 0; even <= 10; even++) {
		if (even % 2 == 0) {
			sum2 += even;
		}
	}
	printf("The sum is: %d", sum2);
		
	
	return 0;
}
