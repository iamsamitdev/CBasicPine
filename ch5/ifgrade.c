#include <stdio.h>

int main() {

    // ตัวอย่างโปรแกรมเช็คเกรด มีทั้งหมด 4 เกรด คือ A, B, C, D
    // โดยมีเงื่อนไขว่า
    // คะแนนตํ่ากว่า 50 ได้เกรด F
    // คะแนนตั้งแต่ 50 ถึง 59 ได้เกรด D
    // คะแนนตั้งแต่ 60 ถึง 69 ได้เกรด C
    // คะแนนตั้งแต่ 70 ถึง 79 ได้เกรด B
    // คะแนนตั้งแต่ 80 ขึ้นไป ได้เกรด A

    int score;

    printf("Enter your score: ");

    scanf("%d", &score);

    if(score < 0 || score > 100) {
        printf("Invalid score\n");
    } else if (score < 50) {
        printf("Your grade is F\n");
    } else if (score >= 50 && score <= 59) {
        printf("Your grade is D\n");
    } else if (score >= 60 && score <= 69) {
        printf("Your grade is C\n");
    } else if (score >= 70 && score <= 79) {
        printf("Your grade is B\n");
    } else {
        printf("Your grade is A\n");
    }

    return 0;
}