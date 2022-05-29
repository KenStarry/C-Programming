#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int x;
	
	FILE * fptr = fopen("backups.txt", "w");
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	fprintf(fptr, "The number is: %d", x);
	fclose(fptr);
	
	return 0;
}
