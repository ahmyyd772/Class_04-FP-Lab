#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        printf("Valid triangle -> ");

        if (a == b && b == c) {
            printf("Type: Equilateral");
        }
        else if (a == b || a == c || b == c) {
            printf("Type: Isosceles");
        }
        else {
            printf("Type: Scalene");
        }

    }
    else {
        printf("Invalid triangle");
    }

    return 0;
}