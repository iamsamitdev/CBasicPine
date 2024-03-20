#include <stdio.h>
#include <unistd.h>

int main() {

  for (int i = 1; i <= 100; i++) {

    if(i % 2 == 1) {
        printf("%d = 1 (on)\n", i);
    } else {
        printf("%d = 0 (off)\n", i);
    }

    // sleep for 1 second
    sleep(1);

  }

  return 0;
}