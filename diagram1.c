#include <stdio.h>

int main() {
	
	int rows = 0;
	
	while(rows < 5) {
		
		int cols = 0;
		while(cols < 5) {
			printf("* ");
			cols++;
		}
		
		rows++;
		printf("\n");
	}
	
	
	int rows10 = 0;
	
	printf("\n");
	while(rows10 <= 10) {
		
		int cols10 = 0;
		
		while(cols10 <= 10) {
			printf("# ");
			cols10++;
		}
		rows10++;
		printf("\n");
	}
	
	
	int x = 0;
	
	printf("\n");
	while(x <= 20) {
		int y = 0;
		while(y <= 20) {
			printf("* ");
			y++;
		}
		
		x++;
		printf("\n");
	}
	
	
	int a;
	
	printf("Enter the number of rows you want: ");
	scanf("%d", &a);
	
	while(a <= 10) {
		int b = 0;
		
		while(b < 10) {
			printf("* ");
			b++;
		}
		
		a++;
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
