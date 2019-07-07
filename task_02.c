#include<stdio.h>
main()
{  float Temp_in_deg,Farenheit;
  printf(" Enter the temperature : ");
  scanf("%f", &Temp_in_deg);
  // Farenheit=(9/5)*Temp_in_deg+32
  Farenheit=(1.88)*Temp_in_deg+32;
  printf("The temperature in farenheit is : %f",Farenheit);
  
  
}
