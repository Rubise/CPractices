#include <stdio.h>

/*
* BMI calculator 
* Height: take in user's Height in Meters M
* Weight: take in user's weight in Kilograms KG
* BMI: calcuculate the BMI in KG/M^2
* Return: Always 0
*/

int main() {
    float height;
    float weight;
    
    printf("What is your Height in Meters M: \n");
    scanf("%f", &height);
    
    printf("What is your Weight in Kilograms KG: \n");
    scanf("%f", &weight);
    
    float bmi = weight / (height * height);
    printf("Your height is %.2f and your weight is %.2f, your BMI is %.2f \n", height, weight, bmi);
    
    if (bmi <= 18)
    {
        printf("You are underweight \n");
    }
    else if(bmi > 18 && bmi <= 25)
    {
        printf("You are normal weight \n");
    }
    else if(bmi > 25 && bmi <= 29)
    {
        printf("You are Overweight \n");
    }
    else if(bmi >= 30)
    {
        printf("You are Obese \n");
      if (bmi > 30 && bmi <= 34)
      {
        printf("You are Class 1 Obese \n");
      }
      else if (bmi >= 35 && bmi <= 34)
      {
        printf("You are Class 2 Obese \n");
      }
      else if (bmi >= 40)
      {
        printf("You are Class 3 Obese \n");
      }
    }

    return 0;
}
