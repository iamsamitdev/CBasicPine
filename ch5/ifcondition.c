#include <stdio.h>

int main() {
    
    // เขียนโปรแกรมเช็คว่าเลขที่ป้อนเกิน 10 หรือไม่
    int number;

    printf("Enter a number: ");

    scanf("%d", &number);

    if (number > 10) {
        printf("The number is greater than 10\n");
    } else {
        printf("The number is less than or equal to 10\n");
    }
    
    return 0;
}