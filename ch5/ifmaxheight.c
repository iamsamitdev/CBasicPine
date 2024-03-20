#include <stdio.h>

int main() {

    // เขียนโปรแกรมหาความสูงที่สูงที่สุดของคน 2 คน
    int height1, height2, maxHeight;

    printf("Enter height of person 1: ");
    scanf("%d", &height1);

    printf("Enter height of person 2: ");
    scanf("%d", &height2);

    // ใช้ if ในการเช็คความสูงที่สูงที่สุด
    if (height1 > height2) {
        maxHeight = height1;
    } else if(height1 == height2){
        maxHeight = 0;
    } else {
        maxHeight = height2;
    } 

    printf("The maximum height is %d\n", maxHeight);
}