#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Hello world!\n");
    printf("Hello Guys\n");

    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("Enter a Second Number: ");
    scanf("%d", &b);

    float area = a * b;
    printf("Area = %f cm3", area);
    return 0;
}
