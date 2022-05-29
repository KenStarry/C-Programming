#include <stdio.h>

int main() {
	printf("Nested If Statements");
	
	int x;

	printf("\nLet's see the kind of person you are.");
	printf("\nPick a number: ");
	scanf("%d", &x);
	
	if(x % 2 == 0) 
	{
		printf("So you like even numbers. Awesome!");
		
		int y;
		
		if(x <= 10)
		  y = ++x;
		else if(x <= 100)
		  y = --x;
		else if(x <= 1000)
		  y = x * 2;
	    else
		  printf("\nWow %d is a big value", y);
		  
		printf("\nThe value of y is %d", y); 
	}
	else
	  printf("So you love odd numbers!");
	  
	  
	  
	  
	  
	  
	  
	  return 0;
}
