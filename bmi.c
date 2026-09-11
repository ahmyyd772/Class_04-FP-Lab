#include<stdio.h>
#include<math.h>
int main(){

float weight;
float height;

    printf("Enter your weight in(KG): ");
    scanf("%f", &weight);

    printf("Enter your Height in meters: ");
    scanf("%f", &height);

    float bmi = weight / (height * height);

    if (bmi < 18.5) {
        printf("bmi = %.2f -> underweight", bmi);
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("bmi = %.2f -> Normal", bmi);
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("bmi = %.2f -> overweight", bmi);
    }
    else {
        printf("bmi = %.2f -> obese", bmi);
    }

    return 0;
}