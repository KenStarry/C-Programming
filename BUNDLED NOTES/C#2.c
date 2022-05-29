#include <stdio.h>

int main()
{
	int mark;
	int sum = 0;
	int i;
	
	for(i=1; i<=5; i++)
	{
		printf("Enter mark %d: ", i);
		scanf("%d", &mark);
		sum += mark;
	}
	
	float avg = sum / 5.0;
	
	char grade;
	
	if(avg>80 && avg<=100)
		grade='A';
	
	else if(avg > 70)
		grade = 'B';
	
	else if(avg > 60)
		grade = 'C';
		
	else if(avg > 50)
		grade = 'D';
	
	else if(avg > 40)
		grade = 'E';
		
	else 
		grade = 'F';
		
	
	printf("\nAverage = %f \nGrade = %c", avg, grade);
		
		
	return 0;
}
