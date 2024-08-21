#include <stdio.h>

int main()
{

  int height, weight;
  float bmi;
  printf("enter your height:");
  scanf("%d", &height);
  printf("enter your weight:");
  scanf("%d", &weight);
  float heightInmeters = height / 100.0;

  bmi = weight / (heightInmeters * heightInmeters);
  printf("Weight:%d\n", weight);
  printf("Height:%d\n", height);
  printf("BMI:%.1f\n", bmi);

  if (bmi < 16.0)
  {
    printf("Severe Thinness");
  }
  else if (bmi >= 16.0 && bmi <= 17.0)
  {
    printf("Moderate Thinness");
  }
  else if (bmi >= 17.0 && bmi <= 18.5)
  {
    printf("Mild Thinness");
  }
  else if (bmi >= 18.5 && bmi <= 25.0)
  {
    printf("Normal");
  }
  else if (bmi >= 25.0 && bmi <= 30.0)
  {
    printf("Overweight");
  }
  else if (bmi >= 30.0 && bmi <= 35.0)
  {
    printf("Obese Class I");
  }
  else if (bmi >= 35.0 && bmi <= 40.0)
  {
    printf("Obese Class II");
  }
  else if (bmi > 40.0)
  {
    printf("Obese Class III");
  }

  return 0;
}