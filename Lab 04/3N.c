#include<stdio.h>
// Largest of Three numbers
int main() {
     
    int number, a, b, c;
    printf("Enter any three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a >c) {
      printf("%d is the largest number \n", a);
    }
    else if (b > a && b> c){
        printf("%d is the largest number \n", b);
    }
    else {
        printf("%d is the Larges number  \n", c);
    };
    return 0;
}