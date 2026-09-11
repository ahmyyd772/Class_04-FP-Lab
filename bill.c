#include <stdio.h>

int main() {

    int units;
    int bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
  printf("Invalid units entered.\n");
    }
    else if (units <= 100) {
   bill = units * 5;
 }
   else if (units <= 200) {
   bill = (100 * 5) + (units - 100) * 8;
    }
    else if (units <= 400) {
    bill = (100 * 5) + (100 * 8) + (units - 200) * 12;
    }
    else {
     bill = (100 * 5) + (100 * 8) + (200 * 12) + (units - 400) * 15;
    }
    if (units >= 0) {
     printf("Total Bill: Rs. %d\n", bill);
    }
    return 0;
}