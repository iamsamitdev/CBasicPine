#include <stdio.h>

int main(){

    // สร้างตัวแปรชนิด int
    int a, b;
    // สร้างตัวแปร float
    float c;

    // แสดงที่อยู่ของตัวแปร a, b, c
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of c: %p\n", &c);

    // ใข้ pointer
    int x = 10;
    int y = 5;

    // ใข้ pointer ชี้ไปที่ตัวแปร x
    int *ptr = &x;

    // แสดงค่าของ x
    printf("Value of x: %d\n", x);

    // แสดงค่าของ pointer
    printf("Value of x: %d\n", *ptr);

    // ใช้ pointer ชี้ไปที่ตัวแปร y
    ptr = &y;

    // แสดงค่าของ pointer
    printf("Value of x: %d\n", *ptr);

    return 0;
}