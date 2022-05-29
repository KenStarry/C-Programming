#include <stdio.h>

int main() {
	int mark;
	char grade;
	
	printf("Enter Marks: ");
	scanf("%d", &mark);
	
	if(mark >100) {
		grade = 'X';
	}
	else if(mark >= 70) {
		grade = 'A';
		printf("Excellent!");
	}
    else if(mark >= 60) {
    	grade = 'B';
    	printf("Awesome!");
	}
    else if(mark >= 50) {
    	grade = 'C';
    	printf("Good Work!");
	}
    else if(mark >= 40) {
    	grade = 'D';
    	printf("Work Harder!");
	}
    else {
    	grade = 'F';
    	printf("Pull up your socks!");
	}
       
    printf("\nGrade = %c", grade);
    printf("\n");
    
    
    
    int h;
    int m;
    int s;
    //Take hour 
    printf("\nEnter Hour: ");
    scanf("%d", &h);
    
    //Take Minute
    printf("Enter Minute: ");
    scanf("%d", &m);
    
    //Take Second
    printf("Enter Second: ");
    scanf("%d", &s);
    
    if(h == 23 & m == 59 & s == 59) {
    	h = 00;
    	m = 00;
    	s = 00;
	}
	else if(s >= 0) {
		s++;
	}
	else if(m >= 0) {
		m++;
	}
	else if(h < 23 & m == 59 & s == 59) {
		h++;
		m = 00;
		s = 00;
	}
	
	printf("\nHour: %d", h);
	printf("\nMinute: %d", m);
	printf("\nSecond: %d", s);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
