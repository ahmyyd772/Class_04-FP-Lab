#include<stdio.h>
int main() {

char operations;
float a, b;
printf("Enter First Number");
scanf("%f", &a);
printf("Enter second Number");
scanf("%f", &b);
printf("Enter the operation you want to perform (+, -, *, /): ");
scanf(" %c", &operations);


switch(operations){

 case '+':
 printf("The sum of %f and %f is %f", a, b, (a + b));
 break;

 case '-':
 printf("The difference of %f and %f is %f", a, b, (a - b));
 break;

 case '*':
 printf("The product of %f and %f is %f", a, b, (a * b));
 break;

 case '/':
 printf("The quotient of %f and %f is %f", a, b, (a / b));
 break;

 default:
 printf("Invalid operation");
}

    return 0;
}