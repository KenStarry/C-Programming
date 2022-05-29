#include <stdio.h>

int main() {
	
	int x = 0;
	
	while(x <= 5)
	{
		printf(" %d", x);
		x++;
	}
	
	printf("\n");
	
	//FOR LOOP
	int y;
	
	for(y = 0; y <= 5; y++) {
		printf(" %d", y);
	}
	
	printf("\n");
	
	
	//FOR LOOP
	int z;
	for(z = 0; z <= 10; z++) {
		printf(" %d", z);
	}
	
	printf("\n");
	
	
	//FOR LOOP
	int a;
	for(a = 0; a <= 20; a++) {
		printf(" %d", a);
	}
	
	
	//FOR LOOP
	int b;
	for(b = 25; b <= 50; b++) {
		
		printf(" %d", b);
	}
	
	int num;
	
	printf("\nWhere would you like to start from?\n");
	scanf("%d", &num);
	
	for(; num<=20; num++) {
		printf("\nThe number is: %d\n", num);
	}
	for(; num>=50; num--) {
		printf("\nThe number is: %d\n", num);
	}
	
	return 0;
}


