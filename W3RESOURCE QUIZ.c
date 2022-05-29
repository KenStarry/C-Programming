#include <stdio.h>

int main() {
	
	printf("Q1. Write a program to display the first 10 natural numbers:\n");
	int a;
	for (a = 0; a <= 10; a++)
	{
		printf("%d ", a);
	}
	
	printf("\n\n");
	
	printf("Q2. A program to get the sum of those first 10 numbers: \n");
	int b;
	int sum = 0;
	for (b=0; b<=10; b++)
	{
		sum += b;
	}
	printf("The sum is: %d", sum);
	
	printf("\n\n");
	
	printf("Q3. Let's find sum of natural numbers from 0 to 17\n");
	int c;
	int sum17 = 0;
	for (c=0; c<=17; c++)
	{
		sum17 += c;
	}
	printf("The sum is: %d", sum17);
	
	/*
	printf("\n\n");
	
	
	printf("Q4. Write a program to read 10 numbers from the keyboard and find their sum and average.\n");
	int d;
	int num;
	int sum2 = 0;
	float avg;
	
	for (d=1; d<=10; d++)
	{
		printf("Enter number %d: ", d);
		scanf("%d", &num);
		
		sum2 += num;
	}
	printf("The sum is: %d", sum2);
	
	avg = sum2 / 10;
	printf("\nThe average is: %f", avg);
	*/
	
	printf("\n\n");
	int e;
	int cube;
	for (e=1; e<=15; e++)
	{
		cube = e * e * e;
		printf("\nNumber %d: The cube of %d is: %d", e, e, cube);
	}
	
	
	
	
	
	
	
	
	return 0;
	
}
