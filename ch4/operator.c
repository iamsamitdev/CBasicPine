#include <stdio.h>

int main(){

    // Operator ทางคณิตศาสตร์
    int a = 5, b = 2;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2f\n", (float) a / b);
    printf("a %% b = %d\n", a % b);

    // Operator ทางตรรกศาสตร์
    int x = 5, y = 2;

    printf("x > y = %d\n", x > y);
    printf("x < y = %d\n", x < y);
    printf("x >= y = %d\n", x >= y);
    printf("x <= y = %d\n", x <= y);
    printf("x == y = %d\n", x == y);
    printf("x != y = %d\n", x != y);

    // Operator Logical 
    int m = 1, n = 0;

    printf("m && n = %d\n", m && n); // and
    printf("m || n = %d\n", m || n); // or
    printf("!m = %d\n", !m); // not m

    return 0;
}