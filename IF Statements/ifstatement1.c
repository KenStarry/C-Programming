#include <stdio.h>

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x % 2==0) {
        printf("\n%d Thats an even number", x);
    }
    else
        printf("%d is an odd number", x);





    return 0;


}
