#include<stdio.h>
main()
{
	  float Temp_in_deg,Farenheit,celcius;
	  int choice;
	printf("1.celcius to Farenheit : \n ");
	printf("\n 2.Farenheit to celcius :\n ");
	printf("\n 3.Exit : ");

	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		  printf("\n Enter the temperature : ");
		  scanf("%f", &Temp_in_deg);
		  // Farenheit=(9/5)*Temp_in_deg+32
		  Farenheit=(1.88)*Temp_in_deg+32;
		  printf("The temperature in Farenheit is : %f",Farenheit);
		  break;
		  
		  
		case 2:	  
		  printf("\n Enter the temperature : ");
		  scanf("%f", &Temp_in_deg);
		  celcius=(Farenheit-32)/1.88;
		  printf("The temperature in celcius is : %f",celcius);
					break;
					
					
		case 3:
			exit(1);
						
	}
	
}
