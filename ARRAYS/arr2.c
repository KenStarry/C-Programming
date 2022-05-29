#include <stdio.h>

int main()
{
	/*
	int marks[5];
	
	int i;
	int j;
	
	for(i=0; i<=4; i++)
	{
		printf("Enter mark %d: ", (i+1));
		scanf("%d", &marks[i]);
	}
	
	for(j=0; j<=4; j++)
	{
		printf("%d ", marks[j]);
	}
	*/
	
	FILE * ptr = fopen("arr2.txt", "w");
	
	int salary[5];
	
	int i;
	int j;
	
	
	for(i=0; i<=4; i++)
	{
		printf("Month %d: ", (i+1));
		scanf("%d", &salary[i]);
	}
	
	printf("\nTOTAL SALARY!\n");
	for(j=0; j<=4; j++)
	{
		printf("%d ", salary[j]);
		fprintf(ptr, "%d ", salary[j]);
	}
	
	
	fclose(ptr);
	return 0;
}
