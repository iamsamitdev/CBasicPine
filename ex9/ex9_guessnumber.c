#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

int main() {

    // กำหนดตัวแปร
    int randomNumber, guess, tries = 0;

    srand(time(0)); // กำหนดค่า seed ให้ rand() จากเวลาปัจจุบัน

    // สุ่มตัวเลข 1-100 ตัวแบบไม่ซ้ำกัน
    randomNumber = rand() % 100 + 1;

    // printf("%d\n", randomNumber);
    // เริ่มเกม
    do {
        printf("Enter a guess between 1 and 100: ");
        scanf("%d", &guess);
        tries++;

        if (guess > randomNumber) {
            printf("Too high!\n");
        } else if (guess < randomNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries!\n", tries);
            // Wait for user to press enter
            getch();
            break;
        }
    } while (tries < 5);

    if (tries >= 5) {
        printf("Sorry, you didn't guess the number in 5 tries. Game Over!\n");
        // Wait for user to press enter
        getch();
    }
    
    return 0;
}