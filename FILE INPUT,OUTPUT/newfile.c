#include <stdio.h>

char newFile()
{
	char x = 'A';
	char line[255] = {'A', 'B', 'C', 'D'};
	
	char total
}

int main()
{
	FILE * fpointer = fopen("testing.txt", "w");
	FILE * testAppend = fopen("testing.txt", "a");
	
	fprintf(fpointer, "Hello Guys\n");
	
	fprintf(testAppend, "So I'm Kenneth and I love myself\n");
	fprintf(testAppend, "\n%c", newFile());
	
	
	fclose(fpointer);
	return 0;
}
