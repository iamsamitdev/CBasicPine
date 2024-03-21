#include <stdio.h>

int main()
{
    // ประกาศตัวแปรรับตัวเลข และนับจำนวนครั้ง
    int num, count = 0;

    // ประกาศตัวแปรเก็บผลรวม และค่าเฉลี่ย
    float sum = 0, avg = 0;

    // รับตัวเลขจากผู้ใช้ จนกว่าจะป้อนค่าเป็นติดลบ
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num >= 0) {
        // หาผลรวมของตัวเลขที่รับมา
        sum += num;

        // นับจำนวนครั้งที่รับค่า
        count++;

        // รับตัวเลขใหม่
        printf("Enter a number: ");
        scanf("%d", &num);
    }

    // หาค่าเฉลี่ย
    avg = sum / count;

    // แสดงผลรวม และค่าเฉลี่ย
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}


