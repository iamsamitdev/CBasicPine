#include <stdio.h>

int main(){

    // การรับค่าจากคีย์บอร์ด
    int num1, num2, sum = 0;
    float avg = 0.0;

    printf("Enter a number1: ");
    scanf("%d", &num1);

    printf("Enter a number2: ");
    scanf("%d", &num2);

    // การบวกค่าที่รับมา
    sum = num1 + num2;

    // หาค่าเฉลี่ย
    avg = (float) sum / 2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    printf("Average of %d and %d is %.2f\n", num1, num2, avg);

    return 0;
}