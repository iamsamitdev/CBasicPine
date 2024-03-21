#include <stdio.h>
#include <string.h>

int main()
{
    // สร้างตัวแปรไว้เก็บผลรวม
    int total = 0;

    // สร้างตัวแปรไว้เก็บเบอร์ที่ป้อนเข้ามา
    char phone[11];

    // รับเบอร์โทรศัพท์จากผู้ใช้
    printf("Enter phone number: ");
    scanf("%s", phone);

    // วนลูปเพื่อหาผลรวมของเบอร์โทรศัพท์
    for (int i = 0; i < strlen(phone); i++)
    {
        // แปลงเบอร์โทรศัพท์จากตัวอักษรเป็นตัวเลข
        total += phone[i] - '0';
    }

    // แสดงผลรวมของเบอร์โทรศัพท์
    printf("Total: %d\n", total);

    // ทำนายผล
    switch (total)
    {
    case 9:
    case 14:
    case 15:
    case 19:
    case 23:
    case 24:
    case 32: 
    case 36: 
    case 40: 
    case 41: 
    case 42: 
    case 44: 
    case 45: 
    case 46: 
    case 50: 
    case 51: 
    case 54: 
    case 55: 
    case 56: 
    case 59: 
    case 63: 
    case 64: 
    case 65:
        printf("Good luck\n");
        break;
    case 69:
    case 79:
        printf("You will be lucky\n");
        break;
    case 10: 
    case 13: 
    case 16: 
    case 18: 
    case 20: 
    case 22: 
    case 25: 
    case 26: 
    case 28: 
    case 31: 
    case 35: 
    case 38: 
    case 39: 
    case 47:
    case 49:
    case 52:
    case 53:
    case 57:
    case 58:
    case 60:
    case 61:
        printf("OK Nice\n");
        break;
    case 62:
    case 66:
    case 68:
    case 74:
    case 75:
        printf("Bad but ok if your try\n");
        break;
    case 11:
    case 12:
    case 17:
    case 21:
    case 27:
    case 29:
    case 30:
    case 33:
    case 34:
    case 37:
    case 43:
    case 48:
    case 67:
    case 70:
    case 71:
    case 72:
    case 73:
    case 76:
    case 77:
    case 78:
    case 80:
        printf("Very Bad luck change your phone number please\n");
        break;
    default:
        printf("Invalid number\n");
        break;
    }
    
    return 0;
}
