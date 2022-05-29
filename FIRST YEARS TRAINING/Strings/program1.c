#include <stdio.h>
#include <math.h>

int main() {

    int i = 0;
    int n = 2;
    int result = 0;

    while (i >= 0) {

        result += pow(n, 2);
        n = result;

        if (result > 1000) {
            break;
        }

        i++;
    }

    printf("%d", n);

    return 0;

}
